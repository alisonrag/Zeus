#include "pch.hpp"
#include "Packet.hpp"

//string getName() {
    //return name;
//}

Packet::Packet(int cID, int clength, char* ccontent, e_PacketType cpacketType) {
    ID = cID;
    length = clength;
    content = ccontent;
    packetType = cpacketType;
}

int Packet::getID() {
    return ID;
}

int Packet::getLength() {
    return length;
}

char* Packet::getContent() {
    return content;
}

e_PacketType Packet::getPacketType() {
    return packetType;
}

void Packet::printPacket(bool debug) {
    // console string
    std::string pck_type;
    pck_type = (packetType == e_PacketType::SENDED) ? "send" : "recv";

    // print hexadecimal packet ID
    std::cout << pck_type << ": 0x" << std::hex << std::setw(4) << std::setfill('0') << ID << "\t";
    std::cout << std::dec;

    // print length
    std::cout << "len: " << length << "\n";

    if (debug) {
        std::cout << "        0  1  2  3  4  5  6  7   8  9  A  B  C  D  E  F\n";
        std::cout << "       -- -- -- -- -- -- -- --  -- -- -- -- -- -- -- --\n";
        std::cout << "0000   ";

        for (int i = 0; i < length; ++i) {
            if (i != 0 && i % 16 == 0) {
                std::cout << "  ";

                int line = (i / 16) - 1;

                for (int j = 0; j < 16; ++j) {
                    char c = content[line * 16 + j];

                    if (c >= 32 && c <= 126) {
                        std::cout << c;
                    }
                    else {
                        std::cout << '.';
                    }
                }

                std::cout << "\n" << std::setw(4) << std::setfill('0') << i << std::dec << std::setw(0) <<
                    "   ";
            }
            else if (i % 16 == 8) {
                std::cout << ' ';
            }

            std::cout << std::hex << std::setw(2) << std::setfill('0') << (int(content[i]) & 0xFF) << ' ' << std::dec << std::setw(0);

            if (i == length - 1) {
                int remaining = 16 - (length % 16);
                int fill = (remaining * 3) + 2;

                if (remaining >= 8) {
                    ++fill;
                }

                for (int j = 0; j < fill; ++j) {
                    std::cout << ' ';
                }

                int line = (i - ((length % 16) - 1)) / 16;

                for (int k = 0; k < (length % 16); ++k) {
                    char c = content[line * 16 + k];

                    if (c >= 32 && c <= 126) {
                        std::cout << c;
                    }
                    else {
                        std::cout << '.';
                    }
                }
            }
        }

        std::cout << "\n\n";
    }
}
