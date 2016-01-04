/* 
 * File:   Piece.cpp
 * Author: clement
 * 
 * Created on January 4, 2016, 10:55 AM
 */

#include <string>
#include <iostream>
#include "Piece.h"


Piece::Piece() {
    std::cout << "Piece()" << std::endl;
}

Piece::Piece(const Piece& orig) {
    std::cout << "Piece copy constructor" << std::endl;
}

Piece::~Piece() {
    std::cout << "~Piece" << std::endl;
}




