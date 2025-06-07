#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include <cstdint>


struct Point {
    uint32_t x;
    uint32_t y;

};

enum class Direction{
    Up,
    Down,
    Left,
    Right

};

class Snake{

private:
    std::vector<Point> segments;
    Direction currentDirection;


public:
    Snake(Point startPos);
    void move();
    void changeDirection(Direction newDir);
    void grow();
    void draw() const;


};


#endif