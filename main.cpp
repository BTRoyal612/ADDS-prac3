#include "Player.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Human.h"
#include "Referee.h"
#include "Tournament.h"
#include <iostream>

int main(void) {
    // Make players
    Player* player1 = new Avalanche();
    Player* player2 = new Bureaucrat();
    Player* player3 = new Bureaucrat();
    Player* player4 = new Toolbox();
    Player* player5 = new Toolbox();
    Player* player6 = new Crescendo();
    Player* player7 = new Crescendo();
    Player* player8 = new FistfullODollars();
    Tournament* game = new Tournament();

    std::array<Player *, 8>  competitors = {player1, player2, player3, player4, player5, player6, player7, player8};
    // Print game result
    game->run(competitors);    
}