#include<iostream>
using namespace std;
#include "Image.h"
int main(){

    Image colorful_img("newfile.ppm");

	
    // colorful_img.zeroRed();
    colorful_img.greyScale();

    return 0;
}
