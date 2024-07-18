#pragma once

// allows for faster compilation


#include "common.h"
#include "cart.h"
#include "cpu.h"
#include "ppu.h"

/*
 * How this is organized:
 *
 * EmuContext: contains a cartridge, CPU,PPU,TIMER,ETC
 *
 * constructor is a factory
 */
class EmuContext {
public:
    EmuContext(char *cart,int argc, char **argv);

    bool paused; //whether the emulator is paused
    bool running; //whether it's running
    uint64_t ticks; //how it keeps time

    uint64_t cycles;
    Cartridge* cart;

    CPU* cpu;

    PPU* ppu;

    Bus* bus;







    int emu_run(int argc, char **argv);

    void delay(uint32_t ms);
};

