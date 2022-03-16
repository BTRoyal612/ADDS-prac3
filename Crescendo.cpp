#include "Crescendo.h"

Crescendo::Crescendo() {
    numb = 0;
}

char Crescendo::makeMove() {
    int step = numb % 3;

    switch (step)
    {
    case 0:
        move = 'P';
        break;
    
    case 1:
        move = 'S';
        break;
    
    default:
        move = 'R';
        break;
    }
    numb++;

    return move;
}

void Crescendo::refresh() {
    numb = 0;
}