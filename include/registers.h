//
// Created by Fernando Gonzalez-Cruz on 5/12/24.
//
#include "common.h"
#ifndef GBEMU_REGISTERS_H
#define GBEMU_REGISTERS_H




class Registers {

public:
    u8 a;
    u8 f;
    u8 b;
    u8 c;
    u8 d;
    u8 e;
    u8 h;
    u8 l;
    u16 pc;
    u16 sp;

    u16 read_16(u8 reg_hi, u8 reg_lo);

    u8 get_flag(u8 flag);

    void set_flag(u8 flag);

    void clear_flag(u8 flag);


    u16 write_16(u16 dw, u8* reg_hi, u8 *reg_lo);


};
#endif //GBEMU_REGISTERS_H
