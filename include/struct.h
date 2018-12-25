#pragma once
#include "define.h"
namespace TCP_TUNNEL
{
    union PacketParameter_t
    {

    };

    struct UdpPacket_t
    {
        unsigned int version;
        int ip;
        unsigned short port;
        PacketParameter_t parameter;
        PacketType type;
        unsigned int data_size;
        char data[1];
    };
}
