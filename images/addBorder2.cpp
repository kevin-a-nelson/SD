#include<iostream>
using namespace std;

 struct Pixel{
     unsigned char red;
     unsigned char green;
     unsigned char blue;
 };

 void write_ppm(char *format_name, int x, int y, int range,unsigned char *data)
{
    cout.write((char *)data, 3 * x * y);
}

int main() {

    char format_name[5];
    int x, y, range;

    cin >> format_name;
    cin >> x >> y >> range;
    cin.get();

    // format_name = P6
    // x = 506
    // y = 336

    Pixel**image = new Pixel*[y];
    Pixel**image2 = new Pixel*[y];

    for(int i = 0; i < y; i++){
        image[i] = new Pixel[x];
    }

    for(int i = 0; i < y; i++){
        image2[i] = new Pixel[x];
    }
    
    for(int i = 0; i < y; ++i){
        cin.read( (char *) image[i], x*sizeof(Pixel) );
    }

    format_name[0] = 'P';
    format_name[1] = '6';

    cout << format_name << "\n";
    cout << x << " " << y << endl;
    cout << range << endl;

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < x; j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }

    for(int i = 0; i < y; i++){
        image2[i+10] = image[i];
    }

    for(int i = y-10;i<y;i++){
        for(int j = 0; j < x; j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = 0; j < 10; j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = x-10;j<x;j++){
            image2[i][j].red = 255;
            image2[i][j].blue = 0;
            image2[i][j].green = 0;
        }
    }

    for(int i = 0; i < y; i++){
        cout.write( (char *) image2[i], (x)*sizeof(Pixel));
    }

    cout << "\n";


    return 0;
}