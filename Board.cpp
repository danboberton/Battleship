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

    // Make new board object
    _board = new std::vector<std::vector<Coord>>;

    // new objects
    std::vector<Coord>* newCol;
    Coord* newCoord;

    
    for (int y = 0; y < _sizeY; y++){

        newCol = new std::vector<Coord>;

        _board->push_back(*newCol);
        
        for (int x = 0; x < _sizeX; x++){

            newCol->push_back(*(new Coord(x, y)));
        }
    }
}

Coord* Board::get(int x, int y){

    // Return the address of the saught Coord
    return &_board->at(y).at(x);

}

int Board::getX(){
    return _sizeX;
}

int Board::getY(){
    return _sizeY;
}