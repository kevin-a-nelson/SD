#include<iostream>
#include"DVD.cpp"
#include"DVDArray.h"

DVDArray DVDArray::operator = (const DVDArray &darr){
    size = darr.size;
    elt = new DVD[size+1];
    for (unsigned int i = 0; i < size; i++)
    {
        elt[i] = darr.elt[i];   
    }
    return *this;
}

DVD& DVDArray::operator [] (unsigned int index){
    if(index < size && index >= 0){
        return elt[index];
    } 
    else{
        cout << "Invalid Index\n";
    }
    return elt[0];
}

unsigned int DVDArray::getSize()
{
    return size;
}

void DVDArray::display()
{
    for (unsigned int i = 0; i < size; i++)
    {
        cout << i+1 << ":\t[" << elt[i].getId() << "\t" <<elt[i].getTitle() << "/" << elt[i].getDirector() << "]\n";
    }
}