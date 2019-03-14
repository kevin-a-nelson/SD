#include<iostream>

#include<iostream>
#include<string>
using namespace std;

unsigned char * read_ppm(char * format_name, int &x, int &y, int &range) {

    cin >> format_name;
    cin >> x >> y >> range;
    cin.get();
    unsigned char *data = new unsigned char[3*x*y];
    cin.read((char *)data, 3*x*y);

    return data;

}

int main(){

char fname[5];
int x,y,range;

unsigned char * data = read_ppm(fname,x,y,range);

cout << (unsigned int)data[0];

delete [] data;

}