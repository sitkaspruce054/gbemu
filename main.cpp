#include <iostream>
#include "emu.h"
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {

    if (argc < 2) {
        std::cout << "Usage: ./gbemu <romfile>";
        exit(1);
    }

    auto emu = new EmuContext(argv[1],argc,argv);

    return emu->emu_run(argc,argv);
}
