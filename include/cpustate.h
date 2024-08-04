//
// Created by Fernando Gonzalez-Cruz on 7/23/24.
//

#ifndef GBEMU_CPUSTATE_H
#define GBEMU_CPUSTATE_H

#endif //GBEMU_CPUSTATE_H


#include "registers.h"


typedef struct {
    Registers regs;

    u8 cur_opcode;

    bool halt;

    bool stepping;

} state;