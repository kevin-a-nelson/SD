#include<iostream>
#include"Circle.h"

void Circle::display(){
    Shape::display();
    cout << radius << "\t";
}