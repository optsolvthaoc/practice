/* 
 * File:   main.cpp
 * Author: thaoc
 *
 * Created on March 17, 2016, 11:01 AM
 */

#include <iostream>
#include "Shape.h"
#include "ShapeFactory.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //updated.
    ShapeFactory* factory = ShapeFactory::instance();
    Shape* s1 = factory->makeShape("square");
    cout << s1->perimeter() << endl;
    return 0;
}

