/*
 * This is Battleship
 *
 * @author Dan Butcher & Elita Danilyuk
 * @version2021-04-12
 */

#include "Player.h"

using namespace battleship;

Player::Player(){

_board = new Board(16, 16);
_board->buildBoard();

}

Board* Player::getBoard(){
    return _board;
}



