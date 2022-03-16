#ifndef PLAYER
#define PLAYER

class Player {
    public:
        virtual char makeMove()=0;
        virtual void refresh()=0;

    protected: 
        char move;
        int numb;
};

#endif