// Coord Implementation Can you type?
//Me? You! That's pretty cool. I can't backspace thoiuhh' Yeah ca... can't add new lines wither... either  h... jist on this line lol.   *kust on  *just on this linw, *line can you backa *backspace / delte for fow'
// I see you highlighting though.
#include "Coord.h"

using namespace battleship;

Coord::Coord(){

}

Coord::Coord(int x, int y){
    _x = x;
    _y = y;
    bool _hit = false;
    _ship = NULL;
}

bool Coord::isHit(){
    if (_ship == NULL){
        return false;
    } else {
        return true;
    }
}