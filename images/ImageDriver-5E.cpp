#include<iostream>
using namespace std;
#include "Image.h"
int main(){

    Image colorful_img("newfile.ppm");

    // colorful_img.print();
    // colorful_img.zeroRed();
    // colorful_img.greyScale();
    // colorful_img.horizSqueeze();
    colorful_img.addBorder();
    return 0;
}
