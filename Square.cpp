/* 
 * File:   Square.cpp
 * Author: thaoc
 * 
 * Created on March 17, 2016, 11:30 AM
 */

#include "Square.h"

Square::Square() {
}

Square::Square(const Square& orig) {
}

Square::~Square() {
}

double Square::perimeter(){
    return length * 4.0;
}