#include<iostream>
#include"IntStack.h"

using namespace std;

int main(){

    IntStack test(5);

    test.pop();

    cout << "----------SIZE----------" <<"\n";
    cout << test.getSize() << "\n";
    cout << "------PUSH 1 to 6-------" << "\n";
    for(int i = 0; i < 6;i++){
        test.push(i);
        test.showstack();
    }
    cout << "----------REVERSE---------" <<"\n";
    test.reverse();
    test.showstack();
    cout << "-----------TOP------------" << "\n";
    cout << test.top() << "\n";

    cout <<"-----------POP 1 to 6-----" << "\n";
    for(int i = 0; i < 6;i++){
        test.pop();
        test.showstack();
    }

    // cout << test.getSize() << "\n";

    return 0;
}