#include "MatrixHelper.h"

uint16_t XY(uint8_t x, uint8_t y) {
    // Handle out of bounds
    if (x >= MATRIX_WIDTH || y >= MATRIX_HEIGHT) {
        return 0;
    }

    // Serpentine (zigzag) layout
    if (y & 0x01) {
        // Odd rows run backwards
        uint8_t reverseX = (MATRIX_WIDTH - 1) - x;
        return (y * MATRIX_WIDTH) + reverseX;
    } else {
        // Even rows run forwards
        return (y * MATRIX_WIDTH) + x;
    }
}
