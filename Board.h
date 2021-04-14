// Board Header
 #pragma once
 #include "Ship.h"
 #include "Coord.h"

 #include <vector>

namespace CSC234{

class Board{

    public:

    // Constructos
    Board(); // no-arg
    Board(int, int); // Build board with X, Y

    // Config
    void buildShips();
    void buildBoard();

    // Get Sets
    Coord* get(int, int); // Get coordinate

    int getX();
    int getY();

    private:
        int _sizeX;
        int _sizeY;
        std::vector<std::vector<Coord>>* _board;
        std::vector<Ship> _ships;

    
};

} // end namespace CSC234