/* 
 * File:   ShapeFactory.cpp
 * Author: thaoc
 * 
 * Created on March 17, 2016, 11:09 AM
 */

#include "ShapeFactory.h"
#include "Square.h"

ShapeFactory* ShapeFactory::_instance = 0;

ShapeFactory::ShapeFactory() {
}

ShapeFactory::ShapeFactory(const ShapeFactory& orig) {
}

ShapeFactory::~ShapeFactory() {
}

ShapeFactory* ShapeFactory::instance(){
    if (!_instance) return _instance = new ShapeFactory();
    return _instance;
}

Shape* ShapeFactory::makeShape(std::string shape){
    if (shape == "square") return (Shape*) new Square();
}