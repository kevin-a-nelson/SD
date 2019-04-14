// reading a text file
#include <iostream>
#include <fstream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main () {

    int numShapes;
    char name[64];
    Shape ** myShapeArray;


    ifstream g("shapes.txt");

    g >> numShapes;

    myShapeArray = new Shape * [numShapes+1];

    for(int i = 0 ; i < numShapes; i++){
        g >> name;
        if(name[0] == 'R')
            myShapeArray[i] = new Rectangle(g);
        else if(name[0] == 'C')
            myShapeArray[i] = new Circle(g);
    }

    for(int i = 0; i < numShapes; i++){
        myShapeArray[i][0].display();
        cout << "\n";
    }

    return 0;
}






