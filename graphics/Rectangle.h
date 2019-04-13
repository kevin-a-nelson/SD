#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include<iostream>
#include"Shape.h"

class Rectangle : public Shape {
    int width;
    int height;
public:
    Rectangle() : Shape () {
        width = 50;
        height = 50;
    }
    Rectangle(Point2 p, int w, int h) : Shape(p) {
        width = w;
        height = h;
    }
    Rectangle(istream &is) : Shape(is){
        is >> width;
        is >> height;
    }
    void draw();
    void display();
};

#endif