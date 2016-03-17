/* 
 * File:   Shape.h
 * Author: thaoc
 *
 * Created on March 17, 2016, 11:06 AM
 */

#ifndef SHAPE_H
#define	SHAPE_H

class Shape {
public:
    Shape();
    Shape(const Shape& orig);
    
    virtual double perimeter() = 0;
    
    virtual ~Shape();
private:

};

#endif	/* SHAPE_H */

