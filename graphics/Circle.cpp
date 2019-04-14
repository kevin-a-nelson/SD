#include<iostream>
#include"Circle.h"

void Circle::display(){
    cout << "C" << " ";
    Shape::display();
    cout << radius << " ";
}

void Circle::draw()
{
    append(yaml, "View_", id, ":\n");
    append(yaml, "  style:\n");
    append(yaml, "    position: absolute\n");
    append(yaml, "    borderRadius: 50%\n");
    append(yaml, "    left: ", Shape::getPostion().x - radius, "\n");
    append(yaml, "    top: ", Shape::getPostion().y - radius, "\n");
    append(yaml, "    width: ", 2*radius, "\n");
    append(yaml, "    height: ", 2*radius, "\n");
    send_color();
}