// View Abstract Header
#pragma once
#include <string>
#include "Player.h"
#include "Board.h"
#include "Coord.h"

class AbstractView{

    public:

    virtual void print(std::string) = 0;
    virtual void displayBoard(Player*) = 0;
    virtual void showSetup() = 0;

    private:

};