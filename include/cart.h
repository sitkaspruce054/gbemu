


#pragma once

#include "common.h"
#include <vector>

class Cartridge {
public:

    char filename[1024];

    uint32_t rom_size;

    std::vector<char> rom_data;

    struct rom_head {
        uint8_t entry[4];

        uint8_t logo[0x30];

        char title[16];

        uint8_t sgb_flag;

        uint8_t type;

        uint8_t rom_size;

        uint8_t ram_size;

        uint8_t dest_code;

        uint8_t lic_code;

        uint8_t version;

        uint8_t checksum;

        uint8_t global_checksum;

    };

    struct rom_head *rom_head;

    std::vector<unsigned char> raw_data;

    explicit Cartridge(char * cart);

    int read_rom(char *cart);

    u8 cart_read(u16 address);

    void cart_write(u16 address, u8 value);
};