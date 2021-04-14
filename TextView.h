// TextView Header
#pragma once
#include "AbstractView.h"

class TextView : public AbstractView{

    public:

    // Constructors
    TextView();
    
    void print(std::string);
    void displayBoard(Player*);
};