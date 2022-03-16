#ifndef BUREAUCRAT
#define BUREAUCRAT

#include "Player.h"

class Bureaucrat : public Player {
    public:
        Bureaucrat();
        char makeMove();
        void refresh();
};

#endif