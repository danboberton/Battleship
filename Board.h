// Board Header
 #pragma once
 #include "Ship.h"

 class Coord; // Forward declaration

 #include <vector>

class Board{

    public:

    // Constructos
    Board(); // no-arg
    Board(int, int); // Build board with X, Y

    // Config
    void buildShips();

    // Get Sets
    Coord* get(int, int); // Get coordinate

    private:
        int _sizeX;
        int _sizeY;
        std::vector<std::vector<Coord>> _board;
        std::vector<Ship> _ships;

    
};
