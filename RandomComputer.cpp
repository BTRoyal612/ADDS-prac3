#include <ctime>
#include <cstdlib>
#include "RandomComputer.h"

RandomComputer::RandomComputer() {}

char RandomComputer::makeMove() {
    srand(time(NULL));

    int random = rand() % 3;

    switch (random)
    {
    case 0:
        move = 'R';
        break;
    
    case 1: 
        move = 'P';
        break;

    default:
        move = 'S';
        break;
    }

    return move;
}