/*
 * This is Battleship
 *
 * @author Dan Butcher & Elita Danilyuk
 * @version2021-04-12
 */

#pragma once
#include "Board.h"


    class Player{
    public:
    Player();

    CSC234::Board* getBoard();

    private:
    std::string _name;
    CSC234::Board* _board;


    }; //end class Player
