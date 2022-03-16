#ifndef FISTFULLODOLLARS
#define FISTFULLODOLLARS

#include "Player.h"

class FistfullODollars : public Player {
    public:
        FistfullODollars();
        char makeMove();
        void refresh();
};

#endif