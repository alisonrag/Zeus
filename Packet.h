#pragma once
struct s_packet_db {
	short len;
};

// packet DB
enum e_PacketDBVersion { 
	MIN_PACKET_DB = 0x064,
	MAX_PACKET_DB = 0xBFF,
};

// packets types
enum class PacketTypes {
	RECEIVED = 1,
	SENDED = 2
};

extern struct s_packet_db packet_db[MAX_PACKET_DB + 1];
void show_packet();
void initializeDB();

