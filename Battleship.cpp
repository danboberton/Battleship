// Battleship Implementation

#include "Battleship.h"

namespace CSC234{

// Constructors
Battleship::Battleship(){
    _numPlayers = 2;
}

// Destructor
Battleship::~Battleship(){

    printf("Batteship stopped\n");

}

void Battleship::start(){

    printf("Batteship started\n");

}

Battleship* Battleship::makeGame(){

    return new Battleship();

}

}; // end CSC234 namespace