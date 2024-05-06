#pragma once


#include "common.h"

typedef struct {
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
} registers;

typedef struct {
    registers regs;

    u16 fetch_data;

    u16 mem_dest;

    u8 cur_opcode;

    bool halt;

    bool stepping;
} state;
class CPU {
public:

    state state;
    CPU();

    bool step();
};