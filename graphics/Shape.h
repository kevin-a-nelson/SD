#ifndef _SHAPE_H_
#define _SHAPE_H_

#include<iostream>
#include"ColorPoint2.h"
#include"sd_fun.h"

using namespace std;

class Shape{
    Color color;
    Point2 position;
public:
    Shape(){
        position.x = 0;
        position.y = 0;
        color.r = 50;
        color.b = 50;
        color.g = 50;
    }

    Shape(Point2 p){
        position = p;
        color.r = 50;
        color.b = 50;
        color.g = 50;
    }

    Shape(istream &is){
        is >> color.r;
        is >> color.b;
        is >> color.g;
        is >> position.x;
        is >> position.y;
    }

    Color getColor();
    Point2 getPostion();
    void setColor(Color c);
    void setPosition(int x, int y);
    void send_color();
    void display();
};

#endif