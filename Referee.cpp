#include "Referee.h"
#include "Player.h"

// Constuctor 
Referee::Referee() {}

// Get game result
char Referee::refGame(Player* player1, Player* player2) {
    // Get move from player
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    // Compare
    if (move1 == move2) return 'T';

    switch (move1)
    {
    case 'R':
        if (move2 == 'S') return 'W';
        break;

    case 'P':
        if (move2 == 'R') return 'W';
        break;

    case 'S':
        if (move2 == 'P') return 'W';
        break;
    
    default:
        return 'L';
        break;
    }
    return 'L';
}