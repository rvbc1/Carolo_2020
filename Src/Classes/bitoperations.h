#ifndef BITOPERATIONS_H
#define BITOPERATIONS_H

#include <stdint.h>

uint8_t reverseBits(uint8_t num);

uint8_t changeBit(uint8_t &byte, uint8_t bit, uint8_t value);

uint8_t getBit(uint8_t byte, uint8_t bit);

#endif // BITOPERATIONS_H
