#pragma once
struct s_packet_db {
    int len;
};

enum e_PacketDBVersion {
    MIN_PACKET = 0x064,
    MAX_PACKET = 0xBFF,
};

extern struct s_packet_db packet_db[MAX_PACKET + 1];
void initializeDB();
