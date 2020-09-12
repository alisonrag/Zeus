// dllmain.cpp : Define the DLL Entry Point.
#include "pch.hpp"

// load headers
#include "Packet.hpp"
#include "PacketDB.hpp"
#include "ROCodeBind.hpp"

// load WinSock Lib
#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")

// load Microsoft Detour Lib
#include "detours.h"
#pragma comment(lib, "detours.lib")

HMODULE hModule;

// pre declare the functions
void hook();
void parsePacket(char* buffer, int len, e_PacketType packet_type);
void alloc_console();

// Fake Ws2_32 recv and send Functions
extern "C" {
    int(WINAPI* originalSend)(SOCKET s, const char* buf, int len, int flags) = send;
    int(WINAPI* originalRecv)(SOCKET s, char* buf, int len, int flags) = recv;
}

// int (WINAPI* originalSend)
int WINAPI hookedWinsocketSend(SOCKET s, const char* buffer, int len, int flags) {
    parsePacket((char*)buffer, len, e_PacketType::SENDED);
    return originalSend(s, buffer, len, flags);
}

//  int (WINAPI* originalRecv)
int WINAPI hookedWinsocketRecv(SOCKET socket, char* buffer, int len, int flags) {
    int ret_len = originalRecv(socket, buffer, len, flags);

    if (ret_len != SOCKET_ERROR) {
        parsePacket(buffer, ret_len, e_PacketType::RECEIVED);
        return ret_len;
    }

    return ret_len;

}

// CRagConnection::RecvPacket
int __stdcall hookedRecvPacket(char* buffer, int size) {

    parsePacket(buffer, size, e_PacketType::RECEIVED);

    return RecvPacket(instanceR(), buffer, size);
}

// CRagConnection::SendPacket
int __stdcall hookedSendPacket(size_t size, char* buffer) {

    parsePacket(buffer, (int)size, e_PacketType::SENDED);

    return SendPacket(instanceR(), size, buffer);
}

// log packets to console
void parsePacket(char* buffer, int len, e_PacketType packet_type) {

    // get packet ID
    int packet_id = (buffer[0] & 0xFF) | (buffer[1] << 8);

    // check if packet ID is valid
    if (packet_id >= MIN_PACKET && packet_id <= MAX_PACKET) {

        int packet_len;

        // get packet info (len)
        if (Connection_use_WS2) {
            packet_len = packet_db[packet_id].len;
        }
        else {
            packet_len = packet_db[packet_id].len;
            // TODO: check getPacketSize args
            //packet_len = getPacketSize(packet_id);
            //std::cout << "packet len: " << packet_len << std::endl;
           // return;
        }

        if (packet_len == -1) { // if packet len = -1 means that the lenght is inside of the packet
            packet_len = (int) (buffer[2] & 0xFF) | (buffer[3] << 8);
        }

        if (packet_len <= 0) {
            return;
        }

        // check if there is more then 1 packet in buffer
        if (len > packet_len) {
            int packet_left_size = len - packet_len;

            // avoid garbage
            if (packet_left_size >= 2) {
                // std::cout << "packet need to be sliced. left: " << packet_left_size << "\n";
                int buffer_left = len - packet_len;
                char* sub_buffer = buffer + len - packet_left_size;

                // TODO: Clean Buffer (memcpy) ?
                Packet packet(packet_id, packet_len, buffer, packet_type);
                packet.printPacket(DEBUG);

                // call log_packet again with the next packet and the right lenght
                parsePacket(sub_buffer, buffer_left, packet_type);
                return;
            }
        }
        else {
            Packet packet(packet_id, packet_len, buffer, packet_type);
            packet.printPacket(DEBUG);
        }
    }
}

void alloc_console() {
    // Aloc Console to debug messages
    if (!AllocConsole()) {
        MessageBox(NULL, L"Error - Failed to Alloc Console", NULL, MB_ICONEXCLAMATION);
    }

    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);

    printf("------------------- DEBUG MODE -------------------\n");
}

void hook() {
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

        // Ragexe functions CRagConnection::getPa
        getPacketSize = (originalGetPacketSize)(CRagConnection_instanceR_address);
    }

    DetourTransactionCommit();

    // initialize packet_db
    initializeDB();
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD ul_reason_for_call,
    LPVOID lpReserved
) {
    switch (ul_reason_for_call) {
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