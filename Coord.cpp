// Coord Implementation

#include "Coord.h"

using namespace CSC234;

Coord::Coord(){

}

Coord::Coord(int x, int y){
    _x = x;
    _y = y;
    bool _hit = false;
    _ship = NULL;
}

bool Coord::isHit(){
    if (_ship != NULL){
        return false;
    } else {
        return true;
    }
}