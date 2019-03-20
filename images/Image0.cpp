#include<iostream>
using namespace std;

class Image0
{
    int width, height;
    public:
    Image0(int w, int h){
        if(w < 0){
            width = 0;
        }
        if(h < 0){
            height = 0;
        }
        width = w;
        height = h;
    }
    int getWidth(){return width;}
    int getHeight(){return height;}
};

int main()
{
    Image0 image(10,10);

    cout << image.getWidth() << " " << image.getHeight() << "\n";

    return 0;
}