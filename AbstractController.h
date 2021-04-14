// Abstract Controler Interface Header
#pragma once
#include <string>

class Ship;

class AbstractController{

    public:

    virtual void startGame() = 0;
    virtual void fire(int, int) = 0;
    virtual bool setShip(Ship*) = 0;
    virtual bool yesNo(std::string) = 0;
    // virtual void showSetup() = 0;
    // virtual int getInt() = 0;
    // virtual std::string getString() = 0;

    private:
};