// Battleship Header
#pragma once

#include <vector>
#include "Casino.h"
#include "battleship/AbstractView.h"
#include "battleship/TextController.h"
#include "battleship/Player.h"

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
    std::vector<battleship::Player> _players;
    battleship::TextController* _controller;
    battleship::AbstractView* _view;

};

} // end namespace CSC234