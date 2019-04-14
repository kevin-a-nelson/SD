#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include<iostream>
#include"Shape.h"
#include"sd_fun.h"

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
        // cout << "Width: " <<width << " Height: " << height << "\n";
    }
    void draw();
    void display();
    int getWidth(){
        return width;
    }
    int getHeight(){
        return height;
    }
};

#endif