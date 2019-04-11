#include<iostream>
#include"DVD.cpp"
#include"DVDArrayP.h"

using namespace std;

DVDArrayP DVDArrayP::operator = (const DVDArrayP &copy){
    size = copy.size;
    elt = new DVD * [size+1];
    for(int i = 0; i < size; i++){
        if(copy.elt[i] != 0){
            elt[i] = &*copy.elt[i];
        }
        else{
            elt[i] = 0;
        }
    }
    return * this;
}

DVD& DVDArrayP::operator [] (int i){
    if(i <= size-1 && i >= 0){
        if(elt[i] == 0){
            elt[i] = new DVD;
        }
    }
    else if(i < 0){
        if(elt[0] == 0){
            elt[i] = new DVD;
        } 
        return *elt[0];
    }
    else {
        cout << "Warning: int " << i << " is out of range of size "<< size << "\n"; 
    }
    return *elt[i];
}

void DVDArrayP::display(){
    for(int i = 0; i < size; i++){
        if(elt[i] != 0){
            elt[i]->display();
            cout << "\n";
        }
    }
}