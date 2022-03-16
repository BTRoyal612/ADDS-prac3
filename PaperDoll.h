#ifndef PAPER_DOLL
#define PAPER_DOLL

#include "Player.h"

class PaperDoll : public Player {
    public:
        PaperDoll();
        char makeMove();
        void refresh();
};

#endif