#include "Referee.h"
#include "Player.h"

// Constuctor 
Referee::Referee() {}

// Get game result
char Referee::refGame(Player* player1, Player* player2) {
    // Get move from player
    char pmove = player1->makeMove();
    char cmove = player2->makeMove();

    // Compare
    if (pmove == cmove) return 'T';

    switch (pmove)
    {
    case 'R':
        if (cmove == 'S') return 'W';
        break;

    case 'P':
        if (cmove == 'R') return 'W';
        break;

    case 'S':
        if (cmove == 'P') return 'W';
        break;
    
    default:
        return 'L';
        break;
    }
    return 'L';
}