#include "Cartridge.h"

Cartridge::Cartridge();
Cartridge::~Cartridge();


bool Cartridge::cpuWrite(uint16_t addr, uint8_t data) { return false; }
bool Cartridge::cpuRead(uint16_t addr, uint8_t &data) { return false; }

bool Cartridge::ppuWrite(uint16_t addr, uint8_t data) { return false; }
bool Cartridge::ppuRead(uint16_t addr, uint8_t &data) { return false; }