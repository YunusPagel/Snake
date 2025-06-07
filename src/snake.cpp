#include "snake.h"

#include <iostream>


// Konstruktor 
Snake::Snake(Point startPos) {
    segments.push_back(startPos);
    currentDirection = Direction::Right;
}

// move() Methode 
void Snake::move() {
    // Kopie des aktuellen Kopfes
    Point newHead = segments[0];

    // Je nach Richtung ändern wir x oder y
    switch(currentDirection) {
        case Direction::Up:
            newHead.y -= 1;  // Kopf geht eine Zeile nach oben
            break;
        case Direction::Down:
            newHead.y += 1;  // Kopf geht eine Zeile nach unten
            break;
        case Direction::Left:
            newHead.x -= 1;  // Kopf geht eine Spalte nach links
            break;
        case Direction::Right:
            newHead.x += 1;  // Kopf geht eine Spalte nach rechts
            break;
    }

    // 2. Verschiebe alle Segmente nach hinten
    for (int i = segments.size() - 1; i > 0; --i) {
        segments[i] = segments[i-1];
    }

    // 3. Setze neuen Kopf an Position 0
    segments[0] = newHead;
}

void Snake::draw() const {
    for (size_t i = 0; i < segments.size(); ++i) {
        if (i == 0) {
            std::cout << "O ";  // Kopf
        } else {
            std::cout << "I ";  // Körper
        }
        std::cout << "(" << segments[i].x << ", " << segments[i].y << ")";
        std::cout << std::endl;
    }
}
