#include "FistfullODollars.h"

FistfullODollars::FistfullODollars() {
    numb = 0;
}

char FistfullODollars::makeMove() {
    int step = numb % 3;

    switch (step)
    {
    case 0:
        move = 'R';
        break;
    
    default:
        move = 'P';
        break;
    }
    numb++;

    return move;
}

void FistfullODollars::refresh() {
    numb = 0;
}