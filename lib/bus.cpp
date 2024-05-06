#include "bus.h"



/**
* MEMORY MAP of a gameboy:
 * 0x0000 - 0x3FFF :ROM BANK 0
 *
 * 0x4000 - 0x7FFF: Rome Bank 1: switchable
 *
 * 0x8000 - 0x97FF: CHR RAM
 *
 * 0x9800 - 0x9BFF: BG MAP 1
 *
 *
 *
 *
 *
*/

u8 Bus::bus_read(u16 address) {
    if (address < 0x8000) {
        return cart_read(address);
    }
    UNIMPLEMENTED;
}

void Bus::bus_write(u16 address, u8 value) {
    if (address < 0x8000)
}