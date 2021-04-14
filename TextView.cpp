// Text View Implementation

#include "TextView.h"
#include <string>
using namespace CSC234;

class Player;

TextView::TextView(){

}

void TextView::print(std::string print){
    printf("%s\n", print.c_str());
}

/**
 * @brief display the board with text formatting, checking to see if the coordinates are hit
 * 
 * @param player - Whose board to display
 * 
 * NOT WORKING, Dan working on this
 */
void TextView::displayBoard(Player* player){

    
    string buffer = "";

    Board* board = player->getBoard();
    int xSize = board->getX();
    int ySize = board->getY();
    Coord* curCoord;

    // Print top line
    printf("%s\n", HLine(xSize).c_str());

    // Print row
    buffer.push_back(VERT_DELIM);
    for (int y = 0; y < ySize; y++){

        buffer.push_back(OPEN_SPACE);

        for (int x = 0; x < xSize; x++){

            // TODO Working here, not returning coord;
            curCoord = board->get(x, y);

            // Check if coord is hit
            if (curCoord->isHit()){
                buffer.push_back(HIT_SPACE);
            } else {
                buffer.push_back(OPEN_SPACE);
            }

        }

        // Print buffer
        printf("%s\n", buffer.c_str());

        // Reset buffer
        buffer = "";

        // Print delim row below data row
        printf("%s\n", HLine(xSize).c_str());

    } 

}

void TextView::showSetup(){

}

/**
 * @brief Get a formatted deliminator line for displayBoard
 * 
 *  +-+-+-+-+-+-+-+
 * @return string 
 */
string TextView::HLine(int width){
    string buffer = " ";

    buffer.push_back(CORNER_DELIM);
    for (int x = 0; x < width; x++){

        buffer.push_back(HORZ_DELIM);
        buffer.push_back(CORNER_DELIM);

    }

    return buffer;
    
}