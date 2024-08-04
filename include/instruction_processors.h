//
// Created by Fernando Gonzalez-Cruz on 7/21/24.
//

#ifndef GBEMU_INSTRUCTION_PROCESSORS_H
#define GBEMU_INSTRUCTION_PROCESSORS_H

#endif //GBEMU_INSTRUCTION_PROCESSORS_H

#include "registers.h"
#include "bus.h"
#include "cpustate.h"
class instruction_processors {

    state* state;

    Bus* bus;
    instruction_processors(state* state,Bus* bus);

    void process_instruction();






    u16 fetch_word();

    u8 fetch_byte();

    void decode_exec();

    void _add(u8 val);

    void _adc(u8 op);

    void _sub(u8 op);

    void stk_push(u16 op);

    u16 stk_pop();

    void _xor(u8 op);

    void _orr(u8 op);

    void _cmp(u8 op);

    void _and(u8 op);

    void _inc_addr(u8 reg_hi,u8 reg_lo);

    void _inc_imm(u8 reg);

    void _inc_regpair(u8 reg_hi,u8 reg_lo);

    void _inc_word(u8 reg_hi, u8 reg_lo);

    void _dec_addr(u8 reg_hi,u8 reg_lo);

    void _dec_imm(u8 reg);

    void _dec_regpair(u8 reg_hi,u8 reg_lo);

    void _dec_word(u8 reg_hi, u8 reg_lo);

    void _cp_imp();

    void _cp_imm(u8 val);

    void _cp_addr(u8 reg_hi, u8 reg_lo);

    void _cpl();


    void _daa();

    void _jp_imp();

    void _jp_addr(u8 reg_hi,u8 reg_lo);

    void _jp_cond();

    void _jr();

    void _jr_cond();

    void _ld_imp();

    void _ld_reg_reg(u8 dest,u8 src);

    void _ld_reg_pair(u8 reg, u8 reg_hi, u8 reg_lo);

    void _ld_reg_addr(u8 reg_hi,u8 reg_lo);


    void _inc_reg(u8 reg);

    void _inc_reg(u8 reg);

    void _inc_reg(u8 *reg);

    void _dec_reg(u8 *reg);


    void opcode_0x00();
    void opcode_0x01();
    void opcode_0x02();
    void opcode_0x03();
    void opcode_0x04();
    void opcode_0x05();
    void opcode_0x06();
    void opcode_0x07();
    void opcode_0x08();
    void opcode_0x09();
    void opcode_0x0A();
    void opcode_0x0B();
    void opcode_0x0C();
    void opcode_0x0D();
    void opcode_0x0E();
    void opcode_0x0F();
    void opcode_0x10();
    void opcode_0x11();
    void opcode_0x12();
    void opcode_0x13();
    void opcode_0x14();
    void opcode_0x15();
    void opcode_0x16();
    void opcode_0x17();
    void opcode_0x18();
    void opcode_0x19();
    void opcode_0x1A();
    void opcode_0x1B();
    void opcode_0x1C();
    void opcode_0x1D();
    void opcode_0x1E();
    void opcode_0x1F();
    void opcode_0x20();
    void opcode_0x21();
    void opcode_0x22();
    void opcode_0x23();
    void opcode_0x24();
    void opcode_0x25();
    void opcode_0x26();
    void opcode_0x27();
    void opcode_0x28();
    void opcode_0x29();
    void opcode_0x2A();
    void opcode_0x2B();
    void opcode_0x2C();
    void opcode_0x2D();
    void opcode_0x2E();
    void opcode_0x2F();
    void opcode_0x30();
    void opcode_0x31();
    void opcode_0x32();
    void opcode_0x33();
    void opcode_0x34();
    void opcode_0x35();
    void opcode_0x36();
    void opcode_0x37();
    void opcode_0x38();
    void opcode_0x39();
    void opcode_0x3A();
    void opcode_0x3B();
    void opcode_0x3C();
    void opcode_0x3D();
    void opcode_0x3E();
    void opcode_0x3F();
    void opcode_0x40();
    void opcode_0x41();
    void opcode_0x42();
    void opcode_0x43();
    void opcode_0x44();
    void opcode_0x45();
    void opcode_0x46();
    void opcode_0x47();
    void opcode_0x48();
    void opcode_0x49();
    void opcode_0x4A();
    void opcode_0x4B();
    void opcode_0x4C();
    void opcode_0x4D();
    void opcode_0x4E();
    void opcode_0x4F();
    void opcode_0x50();
    void opcode_0x51();
    void opcode_0x52();
    void opcode_0x53();
    void opcode_0x54();
    void opcode_0x55();
    void opcode_0x56();
    void opcode_0x57();
    void opcode_0x58();
    void opcode_0x59();
    void opcode_0x5A();
    void opcode_0x5B();
    void opcode_0x5C();
    void opcode_0x5D();
    void opcode_0x5E();
    void opcode_0x5F();
    void opcode_0x60();
    void opcode_0x61();
    void opcode_0x62();
    void opcode_0x63();
    void opcode_0x64();
    void opcode_0x65();
    void opcode_0x66();
    void opcode_0x67();
    void opcode_0x68();
    void opcode_0x69();
    void opcode_0x6A();
    void opcode_0x6B();
    void opcode_0x6C();
    void opcode_0x6D();
    void opcode_0x6E();
    void opcode_0x6F();
    void opcode_0x70();
    void opcode_0x71();
    void opcode_0x72();
    void opcode_0x73();
    void opcode_0x74();
    void opcode_0x75();
    void opcode_0x76();
    void opcode_0x77();
    void opcode_0x78();
    void opcode_0x79();
    void opcode_0x7A();
    void opcode_0x7B();
    void opcode_0x7C();
    void opcode_0x7D();
    void opcode_0x7E();
    void opcode_0x7F();
    void opcode_0x80();
    void opcode_0x81();
    void opcode_0x82();
    void opcode_0x83();
    void opcode_0x84();
    void opcode_0x85();
    void opcode_0x86();
    void opcode_0x87();
    void opcode_0x88();
    void opcode_0x89();
    void opcode_0x8A();
    void opcode_0x8B();
    void opcode_0x8C();
    void opcode_0x8D();
    void opcode_0x8E();
    void opcode_0x8F();
    void opcode_0x90();
    void opcode_0x91();
    void opcode_0x92();
    void opcode_0x93();
    void opcode_0x94();
    void opcode_0x95();
    void opcode_0x96();
    void opcode_0x97();
    void opcode_0x98();
    void opcode_0x99();
    void opcode_0x9A();
    void opcode_0x9B();
    void opcode_0x9C();
    void opcode_0x9D();
    void opcode_0x9E();
    void opcode_0x9F();
    void opcode_0xA0();
    void opcode_0xA1();
    void opcode_0xA2();
    void opcode_0xA3();
    void opcode_0xA4();
    void opcode_0xA5();
    void opcode_0xA6();
    void opcode_0xA7();
    void opcode_0xA8();
    void opcode_0xA9();
    void opcode_0xAA();
    void opcode_0xAB();
    void opcode_0xAC();
    void opcode_0xAD();
    void opcode_0xAE();
    void opcode_0xAF();
    void opcode_0xB0();
    void opcode_0xB1();
    void opcode_0xB2();
    void opcode_0xB3();
    void opcode_0xB4();
    void opcode_0xB5();
    void opcode_0xB6();
    void opcode_0xB7();
    void opcode_0xB8();
    void opcode_0xB9();
    void opcode_0xBA();
    void opcode_0xBB();
    void opcode_0xBC();
    void opcode_0xBD();
    void opcode_0xBE();
    void opcode_0xBF();
    void opcode_0xC0();
    void opcode_0xC1();
    void opcode_0xC2();
    void opcode_0xC3();
    void opcode_0xC4();
    void opcode_0xC5();
    void opcode_0xC6();
    void opcode_0xC7();
    void opcode_0xC8();
    void opcode_0xC9();
    void opcode_0xCA();
    void opcode_0xCB();
    void opcode_0xCC();
    void opcode_0xCD();
    void opcode_0xCE();
    void opcode_0xCF();
    void opcode_0xD0();
    void opcode_0xD1();
    void opcode_0xD2();
    void opcode_0xD3();
    void opcode_0xD4();
    void opcode_0xD5();
    void opcode_0xD6();
    void opcode_0xD7();
    void opcode_0xD8();
    void opcode_0xD9();
    void opcode_0xDA();
    void opcode_0xDB();
    void opcode_0xDC();
    void opcode_0xDD();
    void opcode_0xDE();
    void opcode_0xDF();
    void opcode_0xE0();
    void opcode_0xE1();
    void opcode_0xE2();
    void opcode_0xE3();
    void opcode_0xE4();
    void opcode_0xE5();
    void opcode_0xE6();
    void opcode_0xE7();
    void opcode_0xE8();
    void opcode_0xE9();
    void opcode_0xEA();
    void opcode_0xEB();
    void opcode_0xEC();
    void opcode_0xED();
    void opcode_0xEE();
    void opcode_0xEF();
    void opcode_0xF0();
    void opcode_0xF1();
    void opcode_0xF2();
    void opcode_0xF3();
    void opcode_0xF4();
    void opcode_0xF5();
    void opcode_0xF6();
    void opcode_0xF7();
    void opcode_0xF8();
    void opcode_0xF9();
    void opcode_0xFA();
    void opcode_0xFB();
    void opcode_0xFC();
    void opcode_0xFD();
    void opcode_0xFE();
    void opcode_0xFF();

    void _rlc(u8 *reg);
};