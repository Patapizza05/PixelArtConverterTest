/* 
 * File:   Image.h
 * Author: clement
 *
 * Created on January 4, 2016, 11:12 AM
 */

#ifndef IMAGE_H
#define	IMAGE_H

#include "Piece.h"
#include <string>
#include <vector>

using std::string;

class Image {
public:
    Image(string&);
    Image(const Image& orig);
    virtual ~Image();
    std::vector<Piece> getPieces(int,int);
private:

};

#endif	/* IMAGE_H */

