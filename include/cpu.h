#pragma once


#include "common.h"

#include "registers.h"

#include "instructions.h"

#include "bus.h"
#include "instruction_processors.h"

#include "instructions.h"
typedef struct {
    Registers regs;

    u16 fetch_data;

    u16 mem_dest;

    u8 cur_opcode;

    bool dest_is_mem;


    bool halt;

    bool stepping;



    instruction cur_instruction;

} state;
class CPU {
public:

    state state;

    Bus *bus;
    instruction_processors *instruction_rocessors;
    CPU(Bus *bus,instruction_processors *instruction_processors);


    bool tick();

    void fetch_opcode();

    u16 fetch_word();

    u8 fetch_byte();

    void decode();


    void execute();


    void opcode0x01();
};