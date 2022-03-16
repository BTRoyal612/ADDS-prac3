#ifndef TOOLBOX
#define TOOLBOX

#include "Player.h"

class Toolbox : public Player {
    public:
        Toolbox();
        char makeMove();
        void refresh();
};

#endif