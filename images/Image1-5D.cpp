#include<iostream>
#include<string>
#include<fstream>
using namespace std;

 struct Pixel{
     unsigned char red;
     unsigned char green;
     unsigned char blue;
 };

class Image
{
    int width,height;
    int dept = 255;
    Pixel ** data;
    public:
    Image(int w, int h){
        width = w;
        height = h;
        if(w<0){
            width = 0;
        }
        else{
            width = w;
        }
        if(h<0){
            height = 0;
        }

        data = new Pixel*[height];
        for(int i = 0; i < height; i++){
            data[i] = new Pixel[width];
       }
    }
    Image(const char * name){
        
        ifstream g(name);

        char format_name[3];
        g >> format_name >> width >> height >> dept;
        g.get();
        data = new Pixel*[height];
        for(int i = 0; i < height; i++){
            data[i] = new Pixel[width];
        }

        for(int i = 0; i < height; ++i){
            g.read( (char *) data[i], width*sizeof(Pixel) );
        }

        g.close();

    }
    int getWidth(){return width;}
    int getHeight(){return height;}
    void print(){
        cout << "P6" << "\n" << width << " " << height << "\n" << dept << "\n";
        for(int i = 0; i < height; i++){
        cout.write( (char *) data[i], width*sizeof(Pixel) );
        }
    }
};
int main(){

    // Image colorful_img(100,100);

    Image colorful_img("newfile2.ppm");


    colorful_img.print();


    return 0;
}