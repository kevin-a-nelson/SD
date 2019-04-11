#ifndef _DVDArrayP_
#define _DVDArrayP_
#include"DVD.h"
#include<iostream>

class DVDArrayP{
    DVD ** elt;
    int size;
public:
    DVDArrayP operator = (const DVDArrayP &copy);
    DVD& operator [] (int i); 
    int DEFAULT_SIZE = 10;
    DVDArrayP(){
        size = DEFAULT_SIZE;
        elt = new DVD*[size+1];
        for(int i = 0; i < size; i++){
            elt[i] = 0;
        }
    }
    DVDArrayP(const DVDArrayP &copy){
        size = copy.size;
        elt = new DVD * [size+1];
        for(int i = 0; i < size; i++){
            if(copy.elt[i] != 0){
                elt[i] = &*copy.elt[i];
            }
            else {
                elt[i] = 0;
            }
        }
    }
    DVDArrayP(int i){
        size = i;
        elt = new DVD*[size+1];
        for(int i = 0; i < size; i++){
            elt[i] = 0;
        }
    }
    ~DVDArrayP(){
        delete [] elt;
    }
    int getSize(){return size;}
    void display();
};

#endif // _DVDArrayP_