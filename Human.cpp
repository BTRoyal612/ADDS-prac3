#include "Human.h"
#include <iostream>

// Constuctor
Human::Human() {}

// Get move
char Human::makeMove() {
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}