//
// Created by Fernando Gonzalez-Cruz on 7/25/24.
//

#ifndef GBEMU_PPU_H
#define GBEMU_PPU_H

#include "common.h"
class ppu {

    u8 cur_frame;

    u8 line_ticks;

    u8* buffer = new u8(XRES * YRES * sizeof(32));
    
};


#endif //GBEMU_PPU_H
