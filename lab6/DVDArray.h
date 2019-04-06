#ifndef _DVDArray_
#define _DVDArray_
#include"DVD.h"
// #include"DVD.cpp"

#include <iostream>
using namespace std;

class DVDArray
{
    DVD * elt;
    unsigned int size;

  public:
    int DEFAULT_SIZE = 10;
    DVDArray(unsigned int sz)
    {
        size = sz;
        elt = new DVD[sz];
    }
    DVDArray(DVDArray &darr)
    {
        size = darr.size;
        elt = new DVD[size+1];
        for (unsigned int i = 0; i < size; i++)
        {
            elt[i] = darr.elt[i];
        }
    }
    DVDArray(unsigned int sz, DVD * elem){
        size = sz;
        elt = new DVD[sz+1];
        for(unsigned i = 0; i < sz; i++){
            elt[i] = elem[i];
        }
    }
    DVDArray()
    {
        size = DEFAULT_SIZE;
        elt = new DVD[size+1];
    }
    ~DVDArray()
    {
        delete[] elt;
    }

    DVDArray operator = (const DVDArray &darr);
    DVD operator [] (unsigned int index);
    unsigned int getSize();
    void display();
};

#endif //_DVDArray_