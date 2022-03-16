#ifndef RANDOM_COMPUTER
#define RANDOM_COMPUTER

#include "Player.h"

class RandomComputer : public Player {
    public:
        RandomComputer();
        char makeMove();
        void refresh();
};

#endif