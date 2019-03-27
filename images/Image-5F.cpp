#include "Image.h"

void Image::print(){
    cout << "P6" << "\n" << width << " " << height << "\n" << dept << "\n";
    for(int i = 0; i < height; i++){
    cout.write( (char *) data[i], width*sizeof(Pixel) );
    }
}

void Image::zeroRed(){

    cout << "P6" << "\n" << width << " " << height << "\n" << dept << "\n";

    for(int i = 0; i < height; i++){
        for(int j = 0;j<width;j++){
            data[i][j].red = 0;
        }
    }

    for(int i = 0; i < height; i++){
        cout.write( (char *) data[i], width*sizeof(Pixel) );
    }
}  

void Image::horizSqueeze(){

    cout << "P6" << "\n" << width << " " << height << "\n" << dept << "\n";
    
    Pixel**image2 = new Pixel*[height];

    for(int i = 0; i < height; i++){
        image2[i] = new Pixel[width];
    }

    int n = 0;
    for(int i = 0; i < height; i++){
        for(int j = 0;j<width;j++){
            if(j%2 == 1){
                image2[i][n] = data[i][j];
                n++;
            }
        }
        n = 0;
    }
    for(int i = 0; i < height; i++){
    cout.write( (char *) image2[i], width*sizeof(Pixel) );
    }
}

void Image::addBorder(){

    cout << "P6" << "\n" << width << " " << height << "\n" << dept << "\n";

    Pixel**image2 = new Pixel*[height];

    for(int i = 0; i < height; i++){
        image2[i] = new Pixel[width];
    }

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < width; j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }

    for(int i = 0; i < height; i++){
        image2[i+10] = data[i];
    }

    for(int i = height-10;i<height;i++){
        for(int j = 0; j < width; j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j < 10; j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }
    for(int i = 0; i < height; i++){
        for(int j = width-10;j<width;j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }
    for(int i = 0; i < height; i++){
    cout.write( (char *) image2[i], width*sizeof(Pixel) );
    }
}
void Image::greyScale(){
    
    cout << "P6" << "\n" << width << " " << height << "\n" << dept << "\n";

    for(int i = 0; i < height; i++){
        for(int j = 0;j<width;j++){
            int avg = (data[i][j].red + data[i][j].blue + data[i][j].green)/3;
            data[i][j].red = avg;
            data[i][j].green = avg;
            data[i][j].blue = avg;
        }
    }
    for(int i = 0; i < height; i++){
    cout.write( (char *) data[i], width*sizeof(Pixel) );
    }
}
