// Coord Header
#pragma once
#include "Ship.h";

namespace CSC234 {

class Coord{

    public:

    // Constructors
    Coord(); // no-arg

    // Constructor with X and Y location of coordinate
    // Not sure we really need X and Y in the specific coord object,
    // since the object itself with have already have been found with,
    // the X and Y coords. But might be handy later?
    Coord(int, int);

    bool isHit(); // Return true if coord has ship

    private:
    int _x;
    int _y;
    bool _hit; // Coord been fired upon?
    Ship* _ship = NULL; // ship object on this coord;
};

} // end namespace CSC234