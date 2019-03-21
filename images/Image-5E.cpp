#include "Image.h"

void Image::print(){
    cout << "P6" << "\n" << width << " " << height << "\n" << dept << "\n";
    for(int i = 0; i < height; i++){
    cout.write( (char *) data[i], width*sizeof(Pixel) );
    }
}