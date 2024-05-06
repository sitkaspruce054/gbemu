#include <iostream>
#include "include/emu.h"
int main(int argc, char ** argv) {

    auto emu = new EmuContext(argv[1],argc,argv);

    return emu->emu_run(argc,argv);
}
