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

    for(int i = 0; i < 3*x*y; i++){
       if ((i%3) == 0){
           int avg = (data[i]+data[i+1]+data[i+2])/3;
          data[i] = avg;
          data[i+1] = avg;
          data[i+2] = avg;
       }

    }

    cout << fname << "\n"
         << x << " " << y << "\n"
         << range << "\n";

    write_ppm(fname, x, y, range,data);

    delete[] data;
}