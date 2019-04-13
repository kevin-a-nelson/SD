#include<iostream>
#include"Rectangle.h"


void Rectangle::display(){
    Shape::display();
    cout << width << " " << height << "\t";
}