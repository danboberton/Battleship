// TextView Header
#pragma once
#include "AbstractView.h"

namespace battleship{

class TextView : public AbstractView{

    public:

    // Constructors
    TextView();

    void print(std::string);
    void displayBoard(Player*);
    void showSetup();

    private:

    const char VERT_DELIM = '|';
    const char HORZ_DELIM = '-';
    const char CORNER_DELIM = ' ';
    const char OPEN_SPACE = '~';
    const char HIT_SPACE = 'x';
    const char SHIP_SPACE = '#';
    std::string HLine(int); // gets a formatting line for displayBoard

};

}