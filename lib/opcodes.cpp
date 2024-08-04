//
// Created by Fernando Gonzalez-Cruz on 7/25/24.
//

#include "cpu.h"


#include "instruction_processors.h"
#include "common.h"


void instruction_processors::opcode_0x01() {
    this->state->regs.write_16(fetch_word(), &state->regs.b, &state->regs.c);
}

void instruction_processors::opcode_0x02() {
    u8 addr_lo = state->regs.c;
    u8 addr_hi = state->regs.b;
    bus->bus_write(byte_to_word(addr_lo, addr_hi), state->regs.a);
}

void instruction_processors::opcode_0x03() {
    u16 cur = state->regs.read_16(state->regs.b, state->regs.c);
    cur++;
    state->regs.write_16(cur, &state->regs.b, &state->regs.c);
}
void instruction_processors::opcode_0x04() {
    _inc_reg(&state->regs.b);
}

void instruction_processors::opcode_0x05() {
    _dec_reg(&state->regs.b);
}

void instruction_processors::opcode_0x06() {
    state->regs.b = fetch_byte();

}

void instruction_processors::opcode_0x07() {
    bool hi_bit = get_hi_bit(state->regs.a);
    state->regs.a <<= 1;
    if (hi_bit) {
        set_bit(&state->regs.a, 0);
        state->regs.set_flag(CARRY);
    } else {
        clear_bit(&state->regs.a, 0);
    }
    state->regs.clear_flag(CARRY);

}

void instruction_processors::opcode_0x08() {
    u16 addr = fetch_word();
    u8 sp_lo = state->regs.sp & 0xFF;
    u8 sp_hi = state->regs.sp & 0xFF00 >> 8;
    bus->bus_write(addr, sp_lo);
    bus->bus_write(addr + 1, sp_hi);
}

void instruction_processors::opcode_0x09() {
    u16 hl_val = state->regs.read_16(state->regs.h, state->regs.l);
    u16 bc_val = state->regs.read_16(state->regs.b, state->regs.c);
    u16 res = hl_val + bc_val;

    if ((res & 0x10000) != 0) {
        state->regs.set_flag(CARRY);
    } else {
        state->regs.clear_flag(CARRY);
    }

    if ((hl_val & 0xfff) + (bc_val & 0xfff) > 0xfff) {
        state->regs.set_flag(HLC);
    } else {
        state->regs.clear_flag(HLC);
    }

    state->regs.write_16(res, &state->regs.h, &state->regs.l);


}



void instruction_processors::opcode_0x0A(){

}
void instruction_processors::opcode_0x0B(){

}
void instruction_processors::opcode_0x0C(){

}
void instruction_processors::opcode_0x0D(){

}


void instruction_processors::opcode_0x0E(){

}


void instruction_processors::opcode_0x0F() {

}

void instruction_processors::opcode_0x10(){

}
void instruction_processors::opcode_0x11(){

}
void instruction_processors::opcode_0x12(){

}
void instruction_processors::opcode_0x13(){

}
void instruction_processors::opcode_0x14(){

}
void instruction_processors::opcode_0x15(){

}
void instruction_processors::opcode_0x16(){

}
void instruction_processors::opcode_0x17(){

}
void instruction_processors::opcode_0x18(){

}
void instruction_processors::opcode_0x19(){

}
void instruction_processors::opcode_0x1A(){

}
void instruction_processors::opcode_0x1B(){

}
void instruction_processors::opcode_0x1C(){

}
void instruction_processors::opcode_0x1D(){

}
void instruction_processors::opcode_0x1E(){

}
void instruction_processors::opcode_0x1F(){

}
void instruction_processors::opcode_0x20(){

}
void instruction_processors::opcode_0x21(){

}
void instruction_processors::opcode_0x22(){

}
void instruction_processors::opcode_0x23(){

}
void instruction_processors::opcode_0x24(){

}
void instruction_processors::opcode_0x25(){

}
void instruction_processors::opcode_0x26(){

}
void instruction_processors::opcode_0x27(){

}
void instruction_processors::opcode_0x28(){

}
void instruction_processors::opcode_0x29(){

}
void instruction_processors::opcode_0x2A(){

}
void instruction_processors::opcode_0x2B(){

}
void instruction_processors::opcode_0x2C(){

}
void instruction_processors::opcode_0x2D(){

}
void instruction_processors::opcode_0x2E(){

}
void instruction_processors::opcode_0x2F(){

}
void instruction_processors::opcode_0x30(){

}
void instruction_processors::opcode_0x31(){

}
void instruction_processors::opcode_0x32(){

}
void instruction_processors::opcode_0x33(){

}
void instruction_processors::opcode_0x34(){

}
void instruction_processors::opcode_0x35(){

}
void instruction_processors::opcode_0x36(){

}
void instruction_processors::opcode_0x37(){

}
void instruction_processors::opcode_0x38(){

}
void instruction_processors::opcode_0x39(){

}
void instruction_processors::opcode_0x3A(){

}
void instruction_processors::opcode_0x3B(){

}
void instruction_processors::opcode_0x3C(){

}
void instruction_processors::opcode_0x3D(){

}
void instruction_processors::opcode_0x3E(){

}
void instruction_processors::opcode_0x3F(){

}
void instruction_processors::opcode_0x40(){

}
void instruction_processors::opcode_0x41(){

}
void instruction_processors::opcode_0x42(){

}
void instruction_processors::opcode_0x43(){

}
void instruction_processors::opcode_0x44(){

}
void instruction_processors::opcode_0x45(){

}
void instruction_processors::opcode_0x46(){

}
void instruction_processors::opcode_0x47(){

}
void instruction_processors::opcode_0x48(){

}
void instruction_processors::opcode_0x49(){

}
void instruction_processors::opcode_0x4A(){

}
void instruction_processors::opcode_0x4B(){

}
void instruction_processors::opcode_0x4C(){

}
void instruction_processors::opcode_0x4D(){

}
void instruction_processors::opcode_0x4E(){

}
void instruction_processors::opcode_0x4F(){

}
void instruction_processors::opcode_0x50(){

}
void instruction_processors::opcode_0x51(){

}
void instruction_processors::opcode_0x52(){

}
void instruction_processors::opcode_0x53(){

}
void instruction_processors::opcode_0x54(){

}
void instruction_processors::opcode_0x55(){

}
void instruction_processors::opcode_0x56(){

}
void instruction_processors::opcode_0x57(){

}
void instruction_processors::opcode_0x58(){

}
void instruction_processors::opcode_0x59(){

}
void instruction_processors::opcode_0x5A(){

}
void instruction_processors::opcode_0x5B(){

}
void instruction_processors::opcode_0x5C(){

}
void instruction_processors::opcode_0x5D(){

}
void instruction_processors::opcode_0x5E(){

}
void instruction_processors::opcode_0x5F(){

}
void instruction_processors::opcode_0x60(){

}
void instruction_processors::opcode_0x61(){

}
void instruction_processors::opcode_0x62(){

}
void instruction_processors::opcode_0x63(){

}
void instruction_processors::opcode_0x64(){

}
void instruction_processors::opcode_0x65(){

}
void instruction_processors::opcode_0x66(){

}
void instruction_processors::opcode_0x67(){

}
void instruction_processors::opcode_0x68(){

}
void instruction_processors::opcode_0x69(){

}
void instruction_processors::opcode_0x6A(){

}
void instruction_processors::opcode_0x6B(){

}
void instruction_processors::opcode_0x6C(){

}
void instruction_processors::opcode_0x6D(){

}
void instruction_processors::opcode_0x6E(){

}
void instruction_processors::opcode_0x6F(){

}
void instruction_processors::opcode_0x70(){

}
void instruction_processors::opcode_0x71(){

}
void instruction_processors::opcode_0x72(){

}
void instruction_processors::opcode_0x73(){

}
void instruction_processors::opcode_0x74(){

}
void instruction_processors::opcode_0x75(){

}
void instruction_processors::opcode_0x76(){

}
void instruction_processors::opcode_0x77(){

}
void instruction_processors::opcode_0x78(){

}
void instruction_processors::opcode_0x79(){

}
void instruction_processors::opcode_0x7A(){

}
void instruction_processors::opcode_0x7B(){

}
void instruction_processors::opcode_0x7C(){

}
void instruction_processors::opcode_0x7D(){

}
void instruction_processors::opcode_0x7E(){

}
void instruction_processors::opcode_0x7F(){

}
void instruction_processors::opcode_0x80(){

}
void instruction_processors::opcode_0x81(){

}
void instruction_processors::opcode_0x82(){

}
void instruction_processors::opcode_0x83(){

}
void instruction_processors::opcode_0x84(){

}
void instruction_processors::opcode_0x85(){

}
void instruction_processors::opcode_0x86(){

}
void instruction_processors::opcode_0x87(){

}
void instruction_processors::opcode_0x88(){

}
void instruction_processors::opcode_0x89(){

}
void instruction_processors::opcode_0x8A(){

}
void instruction_processors::opcode_0x8B(){

}
void instruction_processors::opcode_0x8C(){

}
void instruction_processors::opcode_0x8D(){

}
void instruction_processors::opcode_0x8E(){

}
void instruction_processors::opcode_0x8F(){

}
void instruction_processors::opcode_0x90(){

}
void instruction_processors::opcode_0x91(){

}
void instruction_processors::opcode_0x92(){

}
void instruction_processors::opcode_0x93(){

}
void instruction_processors::opcode_0x94(){

}
void instruction_processors::opcode_0x95(){

}
void instruction_processors::opcode_0x96(){

}
void instruction_processors::opcode_0x97(){

}
void instruction_processors::opcode_0x98(){

}
void instruction_processors::opcode_0x99(){

}
void instruction_processors::opcode_0x9A(){

}
void instruction_processors::opcode_0x9B(){

}
void instruction_processors::opcode_0x9C(){

}
void instruction_processors::opcode_0x9D(){

}
void instruction_processors::opcode_0x9E(){

}
void instruction_processors::opcode_0x9F(){

}
void instruction_processors::opcode_0xA0(){

}
void instruction_processors::opcode_0xA1(){

}
void instruction_processors::opcode_0xA2(){

}
void instruction_processors::opcode_0xA3(){

}
void instruction_processors::opcode_0xA4(){

}
void instruction_processors::opcode_0xA5(){

}
void instruction_processors::opcode_0xA6(){

}
void instruction_processors::opcode_0xA7(){

}
void instruction_processors::opcode_0xA8(){

}
void instruction_processors::opcode_0xA9(){

}
void instruction_processors::opcode_0xAA(){

}
void instruction_processors::opcode_0xAB(){

}
void instruction_processors::opcode_0xAC(){

}
void instruction_processors::opcode_0xAD(){

}
void instruction_processors::opcode_0xAE(){

}
void instruction_processors::opcode_0xAF(){

}
void instruction_processors::opcode_0xB0(){

}
void instruction_processors::opcode_0xB1(){

}
void instruction_processors::opcode_0xB2(){

}
void instruction_processors::opcode_0xB3(){

}
void instruction_processors::opcode_0xB4(){

}
void instruction_processors::opcode_0xB5(){

}
void instruction_processors::opcode_0xB6(){

}
void instruction_processors::opcode_0xB7(){

}
void instruction_processors::opcode_0xB8(){

}
void instruction_processors::opcode_0xB9(){

}
void instruction_processors::opcode_0xBA(){

}
void instruction_processors::opcode_0xBB(){

}
void instruction_processors::opcode_0xBC(){

}
void instruction_processors::opcode_0xBD(){

}
void instruction_processors::opcode_0xBE(){

}
void instruction_processors::opcode_0xBF(){

}
void instruction_processors::opcode_0xC0(){

}
void instruction_processors::opcode_0xC1(){

}
void instruction_processors::opcode_0xC2(){

}
void instruction_processors::opcode_0xC3(){

}
void instruction_processors::opcode_0xC4(){

}
void instruction_processors::opcode_0xC5(){

}
void instruction_processors::opcode_0xC6(){

}
void instruction_processors::opcode_0xC7(){

}
void instruction_processors::opcode_0xC8(){

}
void instruction_processors::opcode_0xC9(){

}
void instruction_processors::opcode_0xCA(){

}
void instruction_processors::opcode_0xCB(){

}
void instruction_processors::opcode_0xCC(){

}
void instruction_processors::opcode_0xCD(){

}
void instruction_processors::opcode_0xCE(){


}
void instruction_processors::opcode_0xCF(){

}
void instruction_processors::opcode_0xD0(){

}
void instruction_processors::opcode_0xD1(){

}
void instruction_processors::opcode_0xD2(){

}
void instruction_processors::opcode_0xD3(){

}
void instruction_processors::opcode_0xD4(){

}
void instruction_processors::opcode_0xD5(){

}
void instruction_processors::opcode_0xD6(){

}
void instruction_processors::opcode_0xD7(){

}
void instruction_processors::opcode_0xD8(){

}
void instruction_processors::opcode_0xD9(){

}
void instruction_processors::opcode_0xDA(){

}
void instruction_processors::opcode_0xDB(){

}
void instruction_processors::opcode_0xDC(){

}
void instruction_processors::opcode_0xDD(){

}
void instruction_processors::opcode_0xDE(){

}
void instruction_processors::opcode_0xDF(){

}
void instruction_processors::opcode_0xE0(){

}
void instruction_processors::opcode_0xE1(){

}
void instruction_processors::opcode_0xE2(){

}
void instruction_processors::opcode_0xE3(){

}
void instruction_processors::opcode_0xE4(){

}
void instruction_processors::opcode_0xE5(){

}
void instruction_processors::opcode_0xE6(){

}
void instruction_processors::opcode_0xE7(){

}
void instruction_processors::opcode_0xE8(){

}
void instruction_processors::opcode_0xE9(){

}
void instruction_processors::opcode_0xEA(){

}
void instruction_processors::opcode_0xEB(){

}
void instruction_processors::opcode_0xEC(){

}
void instruction_processors::opcode_0xED(){

}
void instruction_processors::opcode_0xEE(){

}
void instruction_processors::opcode_0xEF(){

}
void instruction_processors::opcode_0xF0(){

}
void instruction_processors::opcode_0xF1(){

}
void instruction_processors::opcode_0xF2(){

}
void instruction_processors::opcode_0xF3(){

}
void instruction_processors::opcode_0xF4(){

}
void instruction_processors::opcode_0xF5(){

}
void instruction_processors::opcode_0xF6(){

}
void instruction_processors::opcode_0xF7(){

}
void instruction_processors::opcode_0xF8(){

}
void instruction_processors::opcode_0xF9(){

}
void instruction_processors::opcode_0xFA(){

}
void instruction_processors::opcode_0xFB(){

}
void instruction_processors::opcode_0xFC(){

}
void instruction_processors::opcode_0xFD(){

}
void instruction_processors::opcode_0xFE(){

}
void instruction_processors::opcode_0xFF(){

}





void instruction_processors::_add(u8 op) {
    state->regs.toggle_flag(CARRY,state->regs.a + op > 0xFF);
    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (op & 0x0F) > 0x0F);
    state->regs.clear_flag(N);

    state->regs.a += op;
    state->regs.toggle_flag(ZERO,state->regs.a == 0);
}

void instruction_processors::_adc(u8 op) {
    int carry = state->regs.get_flag(CARRY) ? 1: 0;

    this->state->regs.toggle_flag(CARRY,state->regs.a + op + carry > 0xFF);

    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (op & 0x0F) + carry > 0x0F);
    state->regs.clear_flag(N);

    state->regs.a += op + carry;

    state->regs.toggle_flag(ZERO,state->regs.a == 0);


}


void instruction_processors::_sub(u8 op) {
    state->regs.toggle_flag(CARRY, state->regs.a < op);

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (op & 0x0F));

    state->regs.a -= op;

    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);
}


void instruction_processors::stk_push(u16 op) {
    bus->bus_write(state->regs.sp - 1, ((op & 0xFF00) >> 8) & 0xFF);
    bus->bus_write(state->regs.sp - 2, op & 0xFF);
    state->regs.sp -= 2;
}

u16 instruction_processors::stk_pop() {
    u16 op = (bus_read(state->regs.sp + 1) << 8 | bus_read(state->regs.sp));
    state->regs.sp += 2;
    return op;
}


void instruction_processors::_orr(u8 op) {
    state->regs.a |= op;

    state->regs.toggle_flag(ZERO,state->regs.a == 0);

    state->regs.clear_flag(N);
    state->regs.clear_flag(HLC);
    state->regs.clear_flag(CARRY);
}

void instruction_processors::_xor(u8 op) {
    state->regs.a ^= op;
    state->regs.toggle_flag(ZERO,state->regs.a == 0);

    state->regs.clear_flag(N);
    state->regs.clear_flag(HLC);
    state->regs.clear_flag(CARRY);
}

void instruction_processors::_and(u8 op) {
    state->regs.a &= op;
    state->regs.clear_flag(N);
    state->regs.set_flag(HLC);
    state->regs.clear_flag(CARRY);
}

void instruction_processors::_cmp(u8 op) {
    state->regs.toggle_flag(ZERO,state->regs.a == op);
    state->regs.set_flag(N);
    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) < (op & 0x0F));
    state->regs.toggle_flag(CARRY,state->regs.a < op);
}



void instruction_processors::_dec_reg(u8* reg) {

}

void instruction_processors::_rlc(u8* reg) {
    return;
}

void instruction_processors::_ld_r_r(u8* dest, u8* src) {
    *dest = *src;
}

void instruction_processors::_ld_r_n(u8* dest) {
    u8 val = fetch_byte();
    *dest = val;
}

void instruction_processors::_ld_r_ihl(u8* dest) {
    u8 val = bus->bus_read(state->regs.read_16(state->regs.h,state->regs.l));
    *dest = val;
}

void instruction_processors::_ld_ihl_r(u8* src) {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    bus->bus_write(addr,*src);
}

void instruction_processors::_ld_ihl_n() {
    u8 val = fetch_byte();
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    bus->bus_write(addr,val);

}

void instruction_processors::_ld_a_ibc() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);

    state->regs.a = bus_read(addr);
}

void instruction_processors::_ld_a_ide() {
    u16 addr = state->regs.read_16(state->regs.d,state->regs.e);

    state->regs.a = bus_read(addr);

}

void instruction_processors::_ld_ibc_a() {
    u16 addr = state->regs.read_16(state->regs.b,state->regs.c);

    bus->bus_write(addr,state->regs.a);
}

void instruction_processors::_ld_ide_a() {
    u16 addr = state->regs.read_16(state->regs.d,state->regs.e);

    bus->bus_write(addr,state->regs.a);

}

void instruction_processors::_ld_a_nn() {
    u16 val = fetch_word();
    state->regs.a = val;
}

void instruction_processors::_ld_nn_a() {
    u16 addr = fetch_word();
    bus->bus_write(addr,state->regs.a);
}

void instruction_processors::_ldh_a_c() {
    u16 addr = 0xFF00 | state->regs.c;

    state->regs.a = bus->bus_read(addr);
}

void instruction_processors::_ldh_c_a() {
    u16 addr = 0xFF00 | state->regs.c;

    bus->bus_write(addr,state->regs.a);
}

void instruction_processors::_ldh_a_n() {
    u8 val = fetch_byte();
    state->regs.a = bus_read((0xFF00 | val));
}

void instruction_processors::_ldh_n_a() {
    u8 val = fetch_byte();

    bus->bus_write((0xFF00 | val),state->regs.a);
}

void instruction_processors::_ldh_a_ihld() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u16 new_hl = addr -1;
    state->regs.a = bus_read(addr);
    state->regs.write_16(new_hl,&state->regs.h,&state->regs.l);
}


void instruction_processors::_ldh_ihld_a() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u16 new_hl = addr - 1;

    bus_write(addr,state->regs.a);

    state->regs.write_16(new_hl,&state->regs.h,&state->regs.l);
}

void instruction_processors::_ldh_a_ihli() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u16 new_hl = addr + 1;
    state->regs.a = bus_read(addr);
    state->regs.write_16(new_hl,&state->regs.h,&state->regs.l);

}

void instruction_processors::_ldh_ihli_a() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u16 new_hl = addr + 1;

    bus_write(addr,state->regs.a);

    state->regs.write_16(new_hl,&state->regs.h,&state->regs.l);
}



void instruction_processors::_ld_rr_nn(u8* reg_hi,u8* reg_lo) {
    u16 val = fetch_word();
    state->regs.write_16(val,reg_hi,reg_lo);
}

void instruction_processors::_ld_nn_sp() {
    u16 val = fetch_word();

    u8 sp_lo = (state->regs.sp & 0x00FF);

    u8 sp_hi = (state->regs.sp >> 8 );
    bus->bus_write(val,sp_lo);
    val ++;
    bus->bus_write(val,sp_hi);

}

void instruction_processors::_ld_sp_hl() {
    state->regs.sp = state.regs.read_16(state->regs.h,state->regs.l);
}


void instruction_processors::_push_rr(u8* reg_hi,u8* reg_lo) {
    state->regs.sp -= 1;
    bus_write(state->regs.sp,*reg_hi);
    state->regs.sp -= 1;
    bus_write(state->regs.sp,*reg_lo);
}

void instruction_processors::_pop_rr(u8* reg_hi, u8* reg_lo) {
    u8 lo = bus_read(state->regs.sp++);
    u8 hi  =bus_read(state->regs.sp++);

    *reg_hi = hi;
    *reg_lo = lo;
}

void instruction_processors::_ld_hl_spe() {
    int8_t val = static_cast<int8_t>(fetch_byte());

    state->regs.clear_flag(N);
    state->regs.clear_flag(ZERO);

    u8 adj;

    if ( val)
}



void instruction_processors::_add_r(u8* reg) {
    state->regs.toggle_flag(CARRY,state->regs.a + *reg > 0xFF);
    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (*reg & 0x0F) > 0x0F);
    state->regs.clear_flag(N);

    state->regs.a += *reg;
    state->regs.toggle_flag(ZERO,state->regs.a == 0);

}

void instruction_processors::_add_ihl() {
    u8 val = bus_read(state->regs.read_16(state->regs.h,state->regs.l));

    state->regs.toggle_flag(CARRY,(state->regs.a + val > 0xFF);
    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (val & 0x0F) > 0x0F);
    state->regs.clear_flag(N);
    state->regs.a += val;
    state->regs.toggle_flag(ZERO,state->regs.a == 0);
}

void instruction_processors::_add_imm() {
    u8 val = fetch_byte();
    state->regs.toggle_flag(CARRY,(state->regs.a + val > 0xFF);
    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (val & 0x0F) > 0x0F);
    state->regs.clear_flag(N);
    state->regs.a += val;
    state->regs.toggle_flag(ZERO,state->regs.a == 0);

}

void instruction_processors::_adc(u8* reg) {
    int carry = state->regs.get_flag(CARRY) ? 1: 0;

    this->state->regs.toggle_flag(CARRY,state->regs.a + *reg + carry > 0xFF);

    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (*reg & 0x0F) + carry > 0x0F);
    state->regs.clear_flag(N);

    state->regs.a += *reg + carry;

    state->regs.toggle_flag(ZERO,state->regs.a == 0);

}

void instruction_processors::_adc_ihl() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u8 val = bus_read(addr);
    int carry = state->regs.get_flag(CARRY) ? 1: 0;

    this->state->regs.toggle_flag(CARRY,state->regs.a + val + carry > 0xFF);

    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (val & 0x0F) + carry > 0x0F);
    state->regs.clear_flag(N);

    state->regs.a += val + carry;

    state->regs.toggle_flag(ZERO,state->regs.a == 0);

}


void instruction_processors::_adc_imm() {
    u8 val = fetch_byte();

    int carry = state->regs.get_flag(CARRY) ? 1: 0;

    this->state->regs.toggle_flag(CARRY,state->regs.a + val + carry > 0xFF);

    state->regs.toggle_flag(HLC,(state->regs.a & 0x0F) + (val & 0x0F) + carry > 0x0F);
    state->regs.clear_flag(N);

    state->regs.a += val + carry;

    state->regs.toggle_flag(ZERO,state->regs.a == 0);
}

void instruction_processors::_sub_r(u8* reg) {
    state->regs.toggle_flag(CARRY, state->regs.a < *reg);

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (*reg & 0x0F));

    state->regs.a -= *reg;

    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);
}

void instruction_processors::_sub_ihl() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u8 val = bus_read(addr);

    state->regs.toggle_flag(CARRY, state->regs.a < val);

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (val & 0x0F));

    state->regs.a -= val;

    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);
}


void instruction_processors::_sub_imm() {
    u8 val = fetch_byte();

    state->regs.toggle_flag(CARRY, state->regs.a < val);

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (val & 0x0F));

    state->regs.a -= val;

    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);

}


void instruction_processors::_sbc_r(u8 *reg) {
    int carry = state->regs.get_flag(CARRY) ? 1: 0;
    state->regs.toggle_flag(CARRY, state->regs.a < *reg) + carry;

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (*reg & 0x0F) + carry);

    state->regs.a -= (*reg + carry);

    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);
}

void instruction_processors::_sbc_hl() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u8 val = bus_read(addr);
    int carry = state->regs.get_flag(CARRY) ? 1: 0;
    state->regs.toggle_flag(CARRY, state->regs.a < val) + carry;

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (val & 0x0F) + carry);

    state->regs.a -= (val + carry);

    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);

}

void instruction_processors::_sbc_imm() {
    u8 val = fetch_byte();
    int carry = state->regs.get_flag(CARRY) ? 1: 0;
    state->regs.toggle_flag(CARRY, state->regs.a < val) + carry;

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (val & 0x0F) + carry);

    state->regs.a -= (val + carry);

    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);

}

void instruction_processors::_cp_r(u8* reg) {
    int carry = state->regs.get_flag(CARRY) ? 1: 0;
    state->regs.toggle_flag(CARRY, state->regs.a < *reg) + carry;

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (*reg & 0x0F) + carry);



    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);
}

void instruction_processors::_cp_ihl() {
    u16 addr = state->regs.read_16(state->regs.h,state->regs.l);
    u8 val = bus_read(addr);

    state->regs.toggle_flag(CARRY, state->regs.a < val);

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (val & 0x0F));



    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);
}


void instruction_processors::_cp_imm() {
    u8 val = fetch_byte();

    state->regs.toggle_flag(CARRY, state->regs.a < val);

    state->regs.toggle_flag(HLC, (state->regs.a & 0x0F) < (val & 0x0F));



    state->regs.toggle_flag(ZERO, state->regs.a == 0);

    state->regs.toggle_flag(N,true);


}


void instruction_processors::_inc_reg(u8 *reg) {
    state->regs.toggle_flag(HLC, (*reg & 0x0F) == 0x0F);
    *reg ++;

    state->regs.toggle_flag(ZERO,reg == 0);
    state->regs.toggle_flag(N,false);
}

void instruction_processors::_inc_hl() {

}
