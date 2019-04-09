#include<iostream>
#include"IntQueue.h"

int main(){

    IntQueue test(100);
    int num;

    std::cout << "\n------Start------\n\n";
    std::cout << "Size: " << test.getSize() << "\t\tFront: " << test.getFront() << "\t\tBack: " << test.getBack();

    test.display();

    std::cout << "\n--push 5 times--\n\n";
    
    num = 1;
    for(int i = 0; i < 5; i++){
        test.push(num);
        std::cout << "Front: " << test.getFront() << "\t\tBack: " << test.getBack() << "\t\tFront Num: " << test.frontNumber();
        test.display();
        num++;
    }

    std::cout << "\n----Reverse----\n\n";
    test.reverse();
    std::cout << "Front: " << test.getFront() << "\t\tBack: " << test.getBack() << "\t\tFront Num: " << test.frontNumber() << "\t\tSize: " << test.getSize();
    test.display();

    std::cout << "\n----incSize----\n\n";
    test.incSize();
    std::cout << "Front: " << test.getFront() << "\t\tBack: " << test.getBack() << "\t\tFront Num: " << test.frontNumber() << "\t\tSize: " << test.getSize();
    test.display();

    std::cout << "\n--Pop 5 times--\n\n";
    

    for(int i = 0; i < 5; i++){
        test.pop();
        std::cout << "Front: " << test.getFront() << "\t\tBack: " << test.getBack() << "\t\tFront Num: " << test.frontNumber();
        test.display();
        num++;
    }
    std::cout << "\n ";

    return 0;
}