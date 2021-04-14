/*
 * This is Battleship
 *
 * @author Dan Butcher & Elita Danilyuk
 * @version2021-04-12
 */

#pragma once
#include "Board.h"

namespace battleship{




    class Player{
    public:
    Player();

    Board* getBoard();

    private:
    std::string _name;
    Board* _board;


    }; //end class Player

} // end namespace