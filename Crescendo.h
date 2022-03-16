#ifndef CRESCENDO
#define CRESCENDO

#include "Player.h"

class Crescendo : public Player {
    public:
        Crescendo();
        char makeMove();
        void refresh();
};

#endif