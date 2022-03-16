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
    Player* player2 = new Avalanche();
    // Referee* referee = new Referee();
    // std::cout << referee->refGame(player1, player2) << std::endl;
    Player* player3 = new Avalanche();
    Player* player4 = new Avalanche();
    Player* player5 = new Avalanche();
    Player* player6 = new Bureaucrat();
    Player* player7 = new Avalanche();
    Player* player8 = new Avalanche();
    Tournament* game = new Tournament();

    std::array<Player *, 8>  competitors = {player1, player2, player3, player4, player5, player6, player7, player8};

    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << player3 << std::endl;
    std::cout << player4 << std::endl;
    std::cout << player5 << std::endl;
    std::cout << player6 << std::endl;
    std::cout << player7 << std::endl;
    std::cout << player8 << std::endl;
    std::cout << "\n";

    // Print game result
    std::cout << game->run(competitors) << std::endl;

    free(player1);
    free(player2);
    free(player3);
    free(player4);
    free(player5);
    free(player6);
    free(player7);
    free(player8);
}