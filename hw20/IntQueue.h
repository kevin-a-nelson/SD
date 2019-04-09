#include<iostream>

class IntQueue {
    unsigned * numbers;
    unsigned size;
    unsigned front;
    unsigned back;
public:
    IntQueue(unsigned n){
        front = 0;
        back = 0;
        size = n;
        numbers = new unsigned[size];
    }
    IntQueue(){
        front = 0;
        back = 0;
        size = 100;
        numbers = new unsigned[size];
    }
    ~IntQueue(){
        delete [] numbers;
    }
    unsigned getFront();
    unsigned getSize();
    unsigned getBack();
    void incSize();
    void pop();
    unsigned frontNumber();
    void push(int i);
    void reverse();
    void display();
};