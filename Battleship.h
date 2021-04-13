// Battleship Header
#pragma once

#include <vector>
#include "Casino.h"

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
    std::vector<Player

};

} // end namespace CSC234