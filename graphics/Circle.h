#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include<iostream>
#include"Shape.h"
#include"sd_fun.h"

class Circle : public Shape{
    int radius;
public:
    Circle() : Shape(), radius(5) {}
    Circle(Point2 p, int r) : Shape(p), radius(r) {}

    Circle(istream &is) : Shape(is){
        is >> radius;
        // cout << "Radius: " <<radius << "\n";
    }
    void draw();
    void display();
    int getRadius(){
        return radius;
    }
};

#endif