#include <cstdio>
#include "../include/common.h"



#include "../include/emu.h"
#include "../include/cpu.h"
#include "../include/cart.h"

#include "SDL.h"
#include "SDL_ttf.h"



/**
 * Requires:
 *
 * None
 *
 * Effects:
 *
 * delays execution by ms
 */
void
EmuContext::delay( uint32_t ms)
{
    SDL_Delay(ms);
}


EmuContext::EmuContext(char * cart,int argc, char** argv) {

    Cartridge* ct = new Cartridge(cart);

    cpu = CPU();




}

int
EmuContext::emu_run(int argc, char ** argv)
{
    if (argc < 2) {
        std::cout << "Usage: emu <rom_file> \n";
        return -1;
    }


    SDL_Init(SDL_INIT_VIDEO);

    std::cout << "SDL init called \n";
    TTF_Init();
    std::cout << "TTF init called";

    while (this->running) {

        if (this->paused) {
            this->delay(10);
            continue;
        }

        if (!(this->cpu.step())) {
            printf("CPU stopped \n");
            return -1;
        }

        this->ticks ++;
    }

}



