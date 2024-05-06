#pragma once

#include "common.h"


uint8_t bus_read(uint16_t address);

void bus_write(uint16_t address, uint8_t value);

class Bus {
public:

    u8 bus_read(u16 address);

    void bus_write(u16 address, u8 value)
};