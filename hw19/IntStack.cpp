#include<iostream>
#include"IntStack.h"
using namespace std;

IntStack::IntStack(unsigned int n){
    pos = 0;
    size = n;
    numbers = new int[size];
}
IntStack::IntStack(){};

IntStack::~IntStack(){
    delete [] numbers;
};

unsigned int IntStack::getSize(){
    return size;
}
unsigned int IntStack::getPos(){
    return pos;
}

void IntStack::pop(){
    if(pos > 0){
        for(unsigned int i = 0; i < size-1; i++)
            numbers[i] = numbers[i+1];
        pos--;
    }
}
int IntStack::top(){
    if(pos){
        return numbers[0];
    } else {
        return 0;
    }
}
void IntStack::push(unsigned int x){
    if(pos != size){
        numbers[pos] = x;
        pos++;
    }
}            
void IntStack::showstack(){
    for(unsigned int i = 0; i < pos; i++){
        cout << numbers[i] << " ";
    }
    cout << "\t\tPos: "<< pos <<"\n";
}
void IntStack::reverse(){
    int temp[pos];
    for(unsigned int i = 0; i < pos; i++){
        temp[i] = numbers[pos-i-1];
    }
    for(unsigned int i = 0; i < pos; i++){
        numbers[i] = temp[i];
    }
}