// Text View Implementation

#include "TextView.h"
#include <string>
using namespace battleship;

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

    
    std::string buffer = "";

    Board* board = player->getBoard();
    int xSize = board->getX();
    int ySize = board->getY();
    Coord curCoord;

    // Print top line
    printf("%s\n", HLine(xSize).c_str());

    // Print row
    for (int y = 0; y < ySize; y++){

        buffer.push_back(VERT_DELIM);

        for (int x = 0; x < xSize; x++){

            curCoord = board->get(x, y);

            // Check if coord is hit
            if (curCoord.isHit()){
                buffer.push_back(HIT_SPACE);
            } else {
                buffer.push_back(OPEN_SPACE);
            }

            buffer.push_back(VERT_DELIM);

        }

        // Print buffer
        printf("%s\n", buffer.c_str());

        // Reset buffer
        buffer = "";

        // Print delim row below data row
        printf("%s\n", HLine(xSize).c_str());

    } 

    printf("%c = Open Space\n%c = Hit Space\n", OPEN_SPACE, HIT_SPACE);

}

void TextView::showSetup(){

}

/**
 * @brief Get a formatted deliminator line for displayBoard
 * 
 *  +-+-+-+-+-+-+-+
 * @return string 
 */
std::string TextView::HLine(int width){
    std::string buffer = "";

    buffer.push_back(CORNER_DELIM);
    for (int x = 0; x < width; x++){

        buffer.push_back(HORZ_DELIM);
        buffer.push_back(CORNER_DELIM);

    }

    return buffer;
    
}