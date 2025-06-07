#include <iostream>
#include <thread>
#include <chrono>

#include "board.h"
#include "snake.h"


int main(){

    Board board(40, 20);
    Snake snake({5, 5});

    board.draw();

    for (int i = 0; i < 5; ++i) {
        snake.draw();
        snake.move();
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // 0,5 Sek Pause
        std::cout << "-----\n";
    }


    return 0;
}