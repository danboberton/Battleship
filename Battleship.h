// Battleship Header
#pragma once

#include <vector>
#include "Casino.h"
#include "AbstractView.h"
#include "AbstractController.h"
#include "Player.h"

namespace CSC234 {

class Battleship : public Casino {
    
    public:

    // Constructors
    Battleship();
    ~Battleship();

    static Battleship* makeGame();
    void start(); // virtual binding from Casino

    private:
    int _numPlayers; // Number of players.
    std::vector<Player> _players;
    AbstractController* _controller;
    AbstractView* _view;

};

} // end namespace CSC234