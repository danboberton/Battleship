// Board Implementation

#include "Board.h"
using namespace CSC234;

Board::Board(int x, int  y){

    _sizeX = x;
    _sizeY = y;
    buildShips();
    buildBoard();
}

void Board::buildShips(){
    // TODO Build ships
    // Carrier - 5
    // Battleship - 4
    // Cruiser - 3
    // Submarine - 3
    // Destroyer - 2
}

void Board::buildBoard(){

    // TODO build board
    for (int y = 0; y < _sizeY; y++){
        // _board.push_back(new std::vector<Coord>);
        for (int x = 0; x < _sizeX; x++){


        }
    }
}