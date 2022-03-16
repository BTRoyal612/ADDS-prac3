#ifndef AVALANCHE
#define AVALANCHE

#include "Player.h"

class Avalanche : public Player {
    public:
        Avalanche();
        char makeMove();
        void refresh();
};

#endif