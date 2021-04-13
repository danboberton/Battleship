// Board Header
 #pragma once

 class Coord; // Forward declaration

 #include <vector>

namespace CSC234{

class Board{

    public:

    // Constructos
    Board(); // no-arg
    Board(int, int); // Build board with X, Y

    // Get Sets
    Coord* get(int, int); // Get coordinate

    private:
        int _sizeX;
        int _sizeY;
        std::vector<std::vector<Coord>> _board;

    
};

} // end namespace CSC234