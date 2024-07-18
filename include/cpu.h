#pragma once


#include "common.h"

#include "registers.h"

#include "instructions.h"

#include "bus.h"

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
    CPU(Bus *bus);

    bool step();

    void fetch();

    void decode();


    void execute();



};