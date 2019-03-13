#include <iostream>
#include <string>
using namespace std;

unsigned char *read_ppm(char *format_name, int &x, int &y, int &range)
{

    cin >> format_name;
    cin >> x >> y >> range;
    cin.get();
    unsigned char *data = new unsigned char[3 * x * y];
    cin.read((char *)data, 3 * x * y);

    return data;
}

void write_ppm(char *format_name, int x, int y, int range,unsigned char *data)
{
    cout.write((char *)data, 3 * x * y);
}

int main()
{

    char fname[5];
    int x, y, range;

    unsigned char *data = read_ppm(fname, x, y, range);

    unsigned char *data2 = new unsigned char[(3*x*y)];

    bool border = true;
    int border_int = 0;

    for(int i = 0; i < 3*x*y; i+=2){
        if(border){
            data2[i] = 0;
        }
        if(not border){
            data2[i] = data[i];
        }
        if(data[i] == '\n'){
            border_int += 1;
        }
        if(border_int > 50){
            border = false;
        }
        if(border_int > 500){
            border = true;
        }
    }

    cout << fname << "\n"
         << x << " " << y << "\n"
         << range << "\n";

    write_ppm(fname, x, y, range,data2);

    delete[] data;
    delete[] data2;
}