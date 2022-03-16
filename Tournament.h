#ifndef TOURNAMENT
#define TOURNAMENT

#include "Player.h"
#include <array>

class Tournament {
    public:
        Player * run(std::array<Player *, 8>  competitors);
};

#endif