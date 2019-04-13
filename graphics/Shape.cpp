#include<iostream>
#include"Shape.h"
using namespace std;

Color Shape::getColor(){
    return color;
}
Point2 Shape::getPostion(){
    return position;
}
void Shape::setColor(Color c){
    color.red = c.red;
    color.blue = c.blue;
    color.green = c.green;
}
void Shape::setPosition(int x, int y){
    position.x = x;
    position.y = y;
}
void Shape::display(){
    cout << color.red << " " << color.blue << " " << color.green << "\t";
    cout << position.x << " " << position.y << "\t";
}