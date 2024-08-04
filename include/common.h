#include <stdlib.h>

#include <iostream>

typedef uint8_t u8;

typedef uint16_t u16;

typedef uint32_t u32;

typedef uint64_t u64;

#define ZERO 7

#define N 6

#define HLC 5

#define CARRY 4

typedef uint8_t Byte;

typedef uint16_t Address;

int debuglevel = 0;

#define BIT(a,n) ((a & (1 << n)) ? 1: 0)

#define BIT_SET(a, n, on) (on ? a |= (1 << n) : a &= ~(1 << n))

#define BETWEEN(a,b,c) ((a >= b) && a <= c))

#define UNIMPLEMENTED { std::cout << "NOT IMPLEMENTED\n"; exit(-3);}
void delay(uint32_t ms);


u16 byte_to_word(u8 lo, u8 hi);

bool get_hi_bit(u8 byte);



void clear_bit(u8* byte, u8 offset);

void set_bit(u8* byte,u8 offset);

#define XRES 50

#define YRES 50


