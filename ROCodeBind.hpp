#pragma once
// int __thiscall CRagConnection_SendPacket(CRagConnection *this, size_t a2, void *a3)
typedef int(__thiscall* originalSendPacket)(void* CragConnection, size_t size, char* buffer);
originalSendPacket SendPacket;

// int __thiscall CRagConnection_RecvPacket(CRagConnection* this, void* a2, int a3)
typedef int(__thiscall* oiginalRecvPacket)(void* CragConnection, char* buffer, int size);
oiginalRecvPacket RecvPacket;

// int __thiscall CRagConnection_GetPacketSize(int this)
typedef int(__thiscall* originalGetPacketSize)(int packet_id);
originalGetPacketSize getPacketSize;

// void __stdcall CRagConnection_InstanceR()
typedef void* (__stdcall* originalInstanceR)(void);
originalInstanceR instanceR;