#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include<iostream>
#include"Shape.h"

class Circle : public Shape{
    int radius;
public:
    Circle() : Shape(){
        radius = 5;
    }
    Circle(Point2 p, int r) : Shape(p), radius(r) {}

    Circle(istream &is) : Shape(is){
        is >> radius;
    }
    void draw();
    void display();
};

#endif