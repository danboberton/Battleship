// Text Controller Header

#pragma once
#include "AbstractController.h"

class TextController : public AbstractController {

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
