#pragma once

#include <array>
#include <cstdint>
#include <memory>

#include "cpu6502.h"
#include "ppu2C02.h"
#include "Cartridge.h"

class Bus
{
public:
    Bus();
    ~Bus();

    cpu6502 cpu;
    ppu2C02 ppu;

    std::array<uint8_t, 2 * 1024> cpuRam; // Fake RAM
    std::shared_ptr<Cartridge> cart;

    uint8_t controller[2];

    void cpuWrite(uint16_t addr, uint8_t data);
    uint8_t cpuRead(uint16_t addr, bool bReadOnly = false);

    void insertCartridge(const std::shared_ptr<Cartridge>& cartridge);
    void reset();
    void clock();

private:
    uint32_t nSystemClockCounter = 0;
    uint8_t controller_state[2];
};