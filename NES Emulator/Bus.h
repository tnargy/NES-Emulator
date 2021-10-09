#pragma once
#include <cstdint>
#include "cpu6502.h"
#include <array>

class Bus
{
public:
    Bus();
    ~Bus();

    cpu6502 cpu;
    std::array<uint8_t, 64 * 1024> ram; // Fake RAM

    void write(uint16_t addr, uint16_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);
};