// Text Controller Header

#pragma once
#include "Ship.h"
#include <string>

namespace battleship{


class TextController {

    public:

    // Constructors
    TextController();

    // Interface Functions
    void startGame();
    void fire(int, int);
    bool setShip(Ship*);
    bool yesNo(std::string);
    

    private:
};

} // end namespace
