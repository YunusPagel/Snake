#include <iostream>

#include "board.h"

Board::Board(uint32_t w, uint32_t h)
    : width(w), height(h) {}



void Board::draw() const {
    for (uint32_t y = 0; y < height; ++y) {
        for (uint32_t x = 0; x < width; ++x) {
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
                std::cout << "#";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}


