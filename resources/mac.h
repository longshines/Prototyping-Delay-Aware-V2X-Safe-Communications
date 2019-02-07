/*
 This header file contains MAC address
*/

#include <unistd.h>
#include <stdint.h>

/*our MAC address*/
static uint8_t gu8a_src_mac[6]  = {0x04, 0xf0, 0x21, 0x36, 0x1b, 0x91};

/*other host MAC address*/
static uint8_t gu8a_dest_mac[6] = {0x04, 0xf0, 0x21, 0x36, 0x1b, 0x91};