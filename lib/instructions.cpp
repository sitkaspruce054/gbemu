//
// Created by Fernando Gonzalez-Cruz on 5/12/24.
//



#include "common.h"

#include "instructions.h"



instruction instructions[0x100] = {
    [0x00] = {IN_NOP,AM_IMP},

    [0xC3] = {IN_JP, AM_D16},


    [0xAF] = {IN_XOR, AM_R, RT_A},

    [0x0E] = {IN_LD, AM_R_D8, RT_C},

    [0x05] = {IN_DEC,AM_R,RT_B },

    [0xF3] = {IN_DI}

};


instruction* opcode_to_instruction(u8 opcode) {
    return &instructions[opcode];
}


