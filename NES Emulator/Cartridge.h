#pragma once
#include <cstdint>

class Cartridge
{
public:
    Cartridge();
    ~Cartridge();


    bool cpuWrite(uint16_t addr, uint8_t data);
    bool cpuRead(uint16_t addr, uint8_t &data);

    bool ppuWrite(uint16_t addr, uint8_t data);
    bool ppuRead(uint16_t addr, uint8_t &data);
};