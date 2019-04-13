#include<iostream>
#include"Shape.h"
using namespace std;

int main(){

    Point2 p;
    p.x = 10;
    p.y = 10;

    Color c;
    c.red = 0;
    c.blue = 0;
    c.green = 0;

    Shape a;
    a.display();
    a.setColor(c);
    a.display();
    a.setPosition(6,6);
    a.display();
    Shape b(p);
    b.display();

    a.getColor().display();
    b.getPostion().display();


    return 0;
}