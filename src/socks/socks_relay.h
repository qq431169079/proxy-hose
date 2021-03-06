#ifndef _H_SOCKS_RELAY
#define _H_SOCKS_RELAY

#include "connect.h"
#include "socks_pack.h"

// Desc : start a server as relay server, waiting for client, and connnect to the dest remote addr
//        then set up response for reply
// 
unsigned char socks5_start_relay_server(Socks5RequestPacket request, Socks5ResponsePacket response, int connect_fd);
unsigned char socks5_start_udp_server(Socks5RequestPacket request, Socks5ResponsePacket response, int connect_fd);

#endif