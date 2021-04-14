// Battleship Implementation

#include "Battleship.h"
#include "battleship/TextController.h"
#include "battleship/TextView.h"

namespace CSC234{

// Constructors
Battleship::Battleship(){

    _controller = new battleship::TextController();
    _view = new battleship::TextView();
    _numPlayers = 2;
    _players.push_back(*(new battleship::Player));
}

// Destructor
Battleship::~Battleship(){

    printf("Batteship stopped\n");

}

void Battleship::start(){

    _view->print("Battleship started.");

    // Dan working on displayBoard
    _view->displayBoard(&_players.at(0));

}

Battleship* Battleship::makeGame(){

    return new Battleship();

}

}; // end CSC234 namespace