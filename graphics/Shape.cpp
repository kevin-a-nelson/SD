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
    color.r = c.r;
    color.b = c.b;
    color.g = c.g;
}
void Shape::setPosition(int x, int y){
    position.x = x;
    position.y = y;
}
void Shape::display(){
    cout << color.r << " " << color.b << " " << color.g << " ";
    cout << position.x << " " << position.y << " ";
}

void Shape::send_color()
{
    append(yaml, "    backgroundColor: ");
    append(yaml, "rgb(", color.r);
    append(yaml, ",", color.g);
    append(yaml, ",", color.b, ")\n");
}