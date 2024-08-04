



#include "common.h"



u16 byte_to_word(u8 lo, u8 hi) {

    u16 res = 0;

    res |= hi;
    res <<= 8;
    res |= lo;
    return res;

}

bool get_hi_bit(u8 byte) {
    return byte & 0b10000000;
}

void set_bit(u8* byte,u8 offset) {
    *byte |= (1 << offset);
}

void clear_bit(u8* byte, u8 offset) {
    *byte &= (~(1 << (offset)));
}