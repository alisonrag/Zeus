// dllmain.cpp : Define the DLL Entry Point.
#include "pch.h"

// load headers
#include "Packet.h"

// load WinSock Lib
#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")

// load Microsoft Detour Lib
#include "detours.h"
#pragma comment (lib, "detours.lib")

HMODULE hModule;

// pre declare the functions
void hook();
void log_packet(char* buffer, int len, PacketTypes packet_type);
void show_packet(char* buffer, int len);
void alloc_console();

// int __thiscall CRagConnection_SendPacket(CRagConnection *this, size_t a2, void *a3)
typedef int(__thiscall* originalSendPacket) (void* CragConnection, size_t size, char* buffer);
originalSendPacket SendPacket;

// int __thiscall CRagConnection_RecvPacket(CRagConnection* this, void* a2, int a3)
typedef int(__thiscall* oiginalRecvPacket) (void* CragConnection, char* buffer, int size);
oiginalRecvPacket RecvPacket;

// void __stdcall CRagConnection_InstanceR()
typedef void* (__stdcall* originalInstanceR) (void);
originalInstanceR instanceR;

// Fake Ws2_32 recv and send Functions
extern "C"
{
    int (WINAPI* originalSend)(SOCKET s, const char* buf, int len, int flags) = send;
    int (WINAPI* originalRecv)(SOCKET s, char* buf, int len, int flags) = recv;
}

// int (WINAPI* originalSend)
int WINAPI hookedWinsocketSend(SOCKET s, const char* buffer, int len, int flags)
{
    log_packet((char*)buffer, len, PacketTypes::SENDED);
    return originalSend(s, buffer, len, flags);
}

//  int (WINAPI* originalRecv)
int WINAPI hookedWinsocketRecv(SOCKET socket, char* buffer, int len, int flags)
{
    int ret_len = originalRecv(socket, buffer, len, flags);

    if (ret_len != SOCKET_ERROR) {
        log_packet(buffer, ret_len, PacketTypes::RECEIVED);
        return ret_len;
    }

    return ret_len;

}

// CRagConnection::RecvPacket
int __stdcall  hookedRecvPacket(char* buffer, int size) {

    log_packet(buffer, size, PacketTypes::RECEIVED);

    return RecvPacket(instanceR(), buffer, size);
}

// CRagConnection::SendPacket
int __stdcall  hookedSendPacket(size_t size, char* buffer) {

    log_packet(buffer, (int)size, PacketTypes::SENDED);

    return SendPacket(instanceR(), size, buffer);
}

void alloc_console()
{
    // Aloc Console to debug messages
    if (!AllocConsole())
    {
        MessageBox(NULL, L"Error - Failed to Alloc Console", NULL, MB_ICONEXCLAMATION);
    }

    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);

    printf("------------------- DEBUG MODE -------------------\n");
}

// log packets to console
void log_packet(char* buffer, int len, PacketTypes packet_type)
{
    std::string pck_type;
    char* packet_clean = buffer;
    int packet_clean_len = len;

    // console string
    pck_type = (packet_type == PacketTypes::SENDED) ? "send" : "recv";

    // get packet ID
    int packet_id = (buffer[0] & 0xFF) | (buffer[1] << 8);

    // check if packet ID is valid
    if (packet_id >= MIN_PACKET_DB && packet_id <= MAX_PACKET_DB) {

        // get packet info (len)
        struct s_packet_db packet_info;
        packet_info = packet_db[packet_id];
        unsigned int packet_len = packet_info.len;

        // print hexadecimal packet ID
        std::cout << pck_type << ": 0x" << std::hex << std::setw(2) << std::setfill('0') << (int(buffer[1]) & 0xFF) << (int(buffer[0]) & 0xFF) << "\t";
        std::cout << std::dec;

        // if packet len = -1 means that the lenght is inside of the packet
        if (packet_len == -1) {
            packet_len = (buffer[2] & 0xFF) | (buffer[3] << 8);
        }

        // print real packet lenght
        std::cout << "len: " << packet_len << "\n";

        if (packet_len == 0) {
            return;
        }

        // check if there is more then 1 packet in buffer
        if (len > (int)packet_len) {
            int packet_left_size = len - (int)packet_len;

            // avoid garbage
            if (packet_left_size >= 2) {
                // std::cout << "packet need to be sliced. left: " << packet_left_size << "\n";
                int buffer_size = len;
                int buffer_left = len - (int)packet_len;
                char* sub_buffer = buffer + buffer_size - packet_left_size;
                packet_clean_len = packet_len;

                // call log_packet again with the next packet and the right lenght
                show_packet(packet_clean, packet_len);
                log_packet(sub_buffer, buffer_left, packet_type);
                return;
            }
        }
        show_packet(packet_clean, packet_len);
    }
}

void hook()
{
    // try to alloc console
    alloc_console();

    // disable libary call
    DisableThreadLibraryCalls(hModule);

    // detour stuff
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    //We attach our hooked function the the original 
    /* HOOK CUSTOM FUNCTION*/
    if (Connection_use_WS2) {
        // WS2_32.dll functions recv/send
        DetourAttach(&(PVOID&)originalRecv, hookedWinsocketRecv);
        DetourAttach(&(PVOID&)originalSend, hookedWinsocketSend);
    }
    else {
        // Ragexe functions CRagConnection::SendPacket
        SendPacket = (originalSendPacket)(CRagConnection_SendPacket_address);
        DetourAttach(&(PVOID&)SendPacket, hookedSendPacket);

        // Ragexe functions CRagConnection::RecvPacket
        RecvPacket = (oiginalRecvPacket)(CRagConnection_RecvPacket_address);
        DetourAttach(&(PVOID&)RecvPacket, hookedRecvPacket);

        // Ragexe functions CRagConnection::instanceR
        instanceR = (originalInstanceR)(CRagConnection_instanceR_address);
    }

    DetourTransactionCommit();

    // initialize packet_db
    initializeDB();
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)hook, NULL, 0, NULL);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}