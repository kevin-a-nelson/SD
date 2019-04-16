#ifndef _ColorPoint2_
#define _ColorPoint2_

#include<iostream>
using namespace std;

struct Color{
    int r;
    int g;
    int b;
    void display(){
        cout << r << " " << g << " " << b << "\n";
    }
};

struct Point2{
    int x;
    int y;
    void display(){
        cout << x << " " << y << "\n";
    }
};

#endif