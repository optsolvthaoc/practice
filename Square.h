/* 
 * File:   Square.h
 * Author: thaoc
 *
 * Created on March 17, 2016, 11:30 AM
 */

#ifndef SQUARE_H
#define	SQUARE_H

#include "Shape.h"

class Square : Shape{
public:
    Square();
    Square(const Square& orig);
    virtual ~Square();
    
    double perimeter() override;
private:
    double length=5;
};

#endif	/* SQUARE_H */

