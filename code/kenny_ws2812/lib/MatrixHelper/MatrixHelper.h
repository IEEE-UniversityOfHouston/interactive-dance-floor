#ifndef MATRIX_HELPER_H
#define MATRIX_HELPER_H

#include <Arduino.h>

#define MATRIX_WIDTH  15
#define MATRIX_HEIGHT 10
#define NUM_LEDS (MATRIX_WIDTH * MATRIX_HEIGHT)

// Convert X,Y to array index
uint16_t XY(uint8_t x, uint8_t y);

#endif
