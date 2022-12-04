#include "player.h"
#include "display.h"
#include "graphics.h"
#include "boardObjects.h"
#include <memory>


#ifndef BOARD__H
#define BOARD__H


class Board{
    shared_ptr<Player> one;
    shared_ptr<Player> two;
    shared_ptr<Display> dis;
    bool one_turn = true;
    shared_ptr<Graphics> graph;
    bool graphics;
    
    public:
    
    Board(shared_ptr<Player> one, shared_ptr<Player> two, bool graphics);
    void showBoard();
    void move(char l, string dir);
    void showAbilities();
    void download(shared_ptr<BoardObjects> l, shared_ptr<Player> p);
    shared_ptr<Player> battleCheck(shared_ptr<Player> p, shared_ptr<Player> op, shared_ptr<BoardObjects> l);

};





#endif