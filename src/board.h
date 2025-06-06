#ifndef BOARD_H
#define BOARD_H

#include <cstdint> 

class Board {
private:
    uint32_t width;
    uint32_t height;

public:
    Board(uint32_t w, uint32_t h); 
    void draw() const;
    bool isInside(uint32_t x, uint32_t y) const;
};

#endif
