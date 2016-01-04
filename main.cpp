/* 
 * File:   main.cpp
 * Author: clement
 *
 * Created on January 4, 2016, 10:54 AM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Piece.h"
#include "Image.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    std::cout << x << "&" << y << std::endl;
    std::string imagePath = "Hello";
    Image image(imagePath);
    std::vector<Piece> pieces;
    pieces = image.getPieces(x,y);
    Piece piece;
    
    return 0;
}

