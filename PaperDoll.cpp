#include "PaperDoll.h"

PaperDoll::PaperDoll() {
    numb = 0;
}

char PaperDoll::makeMove() {
    int step = numb % 3;

    switch (step)
    {
    case 0:
        move = 'P';
        break;
    
    default:
        move = 'S';
        break;
    }
    numb++;

    return move;
}

void PaperDoll::refresh() {
    numb = 0;
}