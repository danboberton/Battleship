/*
 * This is Battleship
 *
 * @author Dan Butcher & Elita Danilyuk
 * @version2021-04-12
 */

#include "Player.h"

Player::Player(){

_board = new CSC234::Board(16, 16);
_board->buildBoard();

}

CSC234::Board* Player::getBoard(){
    return _board;
}



