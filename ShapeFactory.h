/* 
 * File:   ShapeFactory.h
 * Author: thaoc
 *
 * Created on March 17, 2016, 11:09 AM
 */

#ifndef SHAPEFACTORY_H
#define	SHAPEFACTORY_H
#include <string>
#include "Shape.h"

class ShapeFactory {
public:
    ShapeFactory();
    ShapeFactory(const ShapeFactory& orig);
    virtual ~ShapeFactory();
    static ShapeFactory* instance();
    Shape* makeShape(std::string shape);
private:
    static ShapeFactory *_instance ;
};

#endif	/* SHAPEFACTORY_H */

