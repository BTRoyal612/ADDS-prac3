#ifndef HUMAN
#define HUMAN

#include "Player.h"

class Human : public Player {
    public:
        Human();
        char makeMove();
};

#endif