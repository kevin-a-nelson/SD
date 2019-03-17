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

    // format_name = P3
    // x = 506
    // y = 336

    Pixel**image = new Pixel*[y];

    for(int i = 0; i < y; i++){
        image[i] = new Pixel[x];
    }
    
    for(int i = 0; i < y; ++i){
        cin.read( (char *) image[i], x*sizeof(Pixel) );
    }

    format_name[0] = 'P';
    format_name[1] = '3';

    cout << format_name << "\n";
    cout << x << " " << y << endl;
    cout << range << endl;

    for(int i = 0; i < y; i++){
        for(int n = 0; n < x; n++){
            cout << (int)image[i][n].red << " " << (int)image[i][n].green << " " << (int)image[i][n].blue << "  ";
        }
    }

    return 0;
}