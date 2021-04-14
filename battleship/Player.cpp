/*
 * This is Battleship
 *
 * @author Dan Butcher & Elita Danilyuk
 * @version2021-04-12
 */

#include "Player.h"

using namespace battleship;

Player::Player(){

// TODO maybe ask for board size
_board = new Board(10, 10);
_board->buildBoard();

}

Board* Player::getBoard(){
    return _board;
}



