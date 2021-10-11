#pragma once
#include <cstdint>

class ppu2C02
{
public:
    ppu2C02();
    ~ppu2C02();


    void cpuWrite(uint16_t addr, uint8_t data);
    uint8_t cpuRead(uint16_t addr, bool bReadOnly = false);

    void ppuWrite(uint16_t addr, uint8_t data);
    uint8_t ppuRead(uint16_t addr, bool bReadOnly = false);

    void ConnectCartridge(const std::shared_ptr<Cartridge>& cartridge);
    void clock();

private:
    std::shared_ptr<Cartridge> cart;
};