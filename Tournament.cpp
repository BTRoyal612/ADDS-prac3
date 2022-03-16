#include "Tournament.h"
#include "Player.h"
#include "Referee.h"
#include <iostream>

Player* Tournament:: run(std::array<Player *, 8>  competitors) {
    Referee* referee = new Referee();

    // Quarter final
    int index1 = 0, index2 = 1;
    for (int r = 0; r < 4; r++) {
        char quarter;

        for (int m = 0; m < 5; m++) {
            quarter = referee->refGame(competitors[index1], competitors[index2]);
            if (quarter != 'T') break;
        }
        if (quarter == 'L') competitors[index1] = competitors[index2];
        // std::cout << r << " " << index1 << " " << index2 << " " << quarter << std::endl;

        index1 += 2; index2+=2;
    }
    
    // Semi final
    index1 = 0, index2 = 2;
    for (int r = 0; r < 2; r++) {
        char semi;

        competitors[index1]->refresh();
        competitors[index2]->refresh();

        for (int m = 0; m < 5; m++) {
            semi = referee->refGame(competitors[index1], competitors[index2]);
            if (semi != 'T') break;
        }
        if (semi == 'L') competitors[index1] = competitors[index2];
        // std::cout << semi << std::endl;

        index1+=2; index2+=2;
    }

    // Finals
    char final;

    competitors[0]->refresh();
    competitors[4]->refresh();
    for (int m = 0; m < 5; m++) {
        final = referee->refGame(competitors[0], competitors[4]);
        if (final != 'T') break;
    }
    if (final == 'L') competitors[0] = competitors[4];
    // std::cout << final << std::endl;

    return competitors[0];
}

