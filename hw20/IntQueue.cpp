#include<iostream>
#include"IntQueue.h"

unsigned IntQueue::getFront(){
    return front;
}
unsigned IntQueue::getSize(){
    return size;
}
unsigned IntQueue::getBack(){
    return back;
}
void IntQueue::incSize(){
    size *= 2;
    unsigned * tmp = new unsigned[size];
    for(unsigned i = front; i < back; i++){
        tmp[i] = numbers[i];
    }
    delete [] numbers;
    numbers = tmp;
}
void IntQueue::pop(){
    if(front != back){
        front++;
    }
}
unsigned IntQueue::frontNumber(){
    return numbers[front];
}
void IntQueue::push(int i){
    if(front == 0 && back == 0){ 
        numbers[back] = i;
        // std::cout << "Inside Push: " <<numbers[front] << "\n";
        back++;
    }
    else if(front != back && numbers[front] != 0){
        numbers[back] = i;
        back++;
    }
}
void IntQueue::reverse(){
    int * temp = new int[size];
    for(unsigned i = front; i < back; i++){
        temp[i] = numbers[i];
    }
    for(unsigned i = front; i < back; i++){
        numbers[i] = temp[back-i-1];
    }
}
void IntQueue::display(){
    std::cout << "\t";
    for(unsigned i = front; i < back; i++){
        std::cout << " " << numbers[i];
    }
    std::cout << "\n";
}