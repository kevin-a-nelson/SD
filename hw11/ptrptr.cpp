#include<iostream>

using namespace std;

int main() {

    int i;
    int *p;
    int **pp;
    i = 5;
    p = &i;
    pp = &p;

    cout << "i == " << i << "\n" << "*p == " << *p << "\n**pp == " << **pp << endl;

    return 0;

}
