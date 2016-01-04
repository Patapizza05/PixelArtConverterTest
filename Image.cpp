/* 
 * File:   Image.cpp
 * Author: clement
 * 
 * Created on January 4, 2016, 11:12 AM
 */

#include "Image.h"
#include <iostream>
#include "Piece.h"

Image::Image(std::string& imagePath) {
    std::cout << imagePath << std::endl;
}

Image::Image(const Image& orig) {
}

Image::~Image() {
}

std::vector<Piece> getPieces(int x, int y) {
    std::vector<Piece> pieces;
    return pieces;
}

