#ifndef _SHAPE_H_
#define _SHAPE_H_

#include<iostream>
#include"ColorPoint2.h"
using namespace std;

class Shape{
    Color color;
    Point2 position;
public:
    Shape(){
        position.x = 0;
        position.y = 0;
        color.red = 100;
        color.blue = 100;
        color.green = 100;
    }
    Shape(Point2 p){
        position = p;
        color.red = 100;
        color.blue = 100;
        color.green = 100;
    }
    Shape(istream &is){
        is >> position.x;
        is >> position.y;
        is >> color.red;
        is >> color.blue;
        is >> color.green;
    }
    Color getColor();
    Point2 getPostion();
    void setColor(Color c);
    void setPosition(int x, int y);
    void send_color();
    void display();
};

#endif