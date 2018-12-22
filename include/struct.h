#pragma once
#include "define.h"
namespace TCP_PROXY_USE_UDP
{
    union PacketParameter
    {

    };

    struct UdpPacket_t
    {
        unsigned int version;
        PacketType type;
        unsigned int data_size;
        PacketParameter parameter;
        char data[1];
    };
}
