#include "cpu.h"

#include "common.h"

CPU::CPU(Bus* bus,instruction_processors* instruction_processors) {

    this->bus = bus;
    this->instruction_rocessors = instruction_processors;

    state.regs.pc = 0x100;
    state.regs.a = 0x1;

};

auto CPU::tick() -> bool {


    if (!this->state.halt) {
        fetch_opcode();
        u8 cycles = this->instruction_rocessors->dec
        return true;
    };
    return false;
}



/**
 * Fetches a single byte, and increments the PC
 */
void CPU::fetch_opcode() {
    state.cur_opcode = fetch_byte();

}






void CPU::execute() {
    std::cout << "NOT executing yet";
};