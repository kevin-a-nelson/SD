#ifndef _IntStack_
#define _IntStack_
#include<iostream>
using namespace std;

class IntStack{
    int * numbers;
    unsigned int size;
    unsigned int pos;
public:
    IntStack(unsigned int n);
    IntStack();

    ~IntStack();

    unsigned int getSize();
    unsigned int getPos();

    void pop();
    int top();
    void push(unsigned int x);        
    void showstack();
    void reverse();
};

#endif //_IntStack_