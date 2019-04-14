#include<iostream>
#include"Rectangle.h"


void Rectangle::display(){
    cout << "R" << " ";
    Shape::display();
    cout << width << " " << height << " ";
}

void Rectangle::draw()
{
    append(yaml, "View_", id, ":\n");
    append(yaml, "  style:\n");
    append(yaml, "    position: absolute\n");
    double x0 = min(Shape::getPostion().x, Shape::getPostion().x + width);
    double y0 = min(Shape::getPostion().y, Shape::getPostion().y + height);
    append(yaml, "    left: ", x0, "\n");
    append(yaml, "    top: ", y0, "\n");
    append(yaml, "    width: ", abs(width), "\n");
    append(yaml, "    height: ", abs(height), "\n");
    send_color();
}
