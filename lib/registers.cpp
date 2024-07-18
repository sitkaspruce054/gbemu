//
// Created by Fernando Gonzalez-Cruz on 5/20/24.
//


#include "registers.h"


u16 Registers::read_16(u8 reg_hi, u8 reg_lo) {

    return (reg_hi << 4) | reg_lo;
}

u16 Registers::write_16(u16 dw, u8 *reg_hi, u8 *reg_lo) {

    *reg_hi = dw >> 4;

    *reg_lo = dw << 4;
}

void Registers::set_flag(u8 flag) {
    f ^= (1 << flag);
}

u8 Registers::get_flag(u8 flag) {
    return f & (1 << flag);
}

