#include<iostream>
#include<string>
using namespace std;

int func(int arg){
    arg = arg + 2;
    return arg;
}
int funcp(int *argp)
{
    *argp = (*argp)+2;
    return *argp;
}

int main()
{
    int i = 17;
    double f = -4.2;
    int *ip = &i;
    double *fp = &f;
    cout << "i == " << i << "\n" << "f == " << f << "\n*ip == " << *ip << "\n*fp == " << *fp << endl; 
    i *= 3;
    *fp *= 1.5;
    cout << "--------------------------\n";
    cout << "i == " << i << "\n" << "f == " << f << "\n*ip == " << *ip << "\n*fp == " << *fp << endl; 
    double f2 = 2.5;
    fp = &f2;
    cout << "--------------------------\n";
    cout << "i == " << i << "\n" << "f == " << f << "\n*ip == " << *ip << "\n*fp == " << *fp << endl; 

    cout << "funct(i) returns " << func(i);
    cout << ", i == " << i << ", *ip == " << *ip << endl;

    cout << "funct(*ip) returns " << func(i);
    cout << ", i == " << i << ", *ip == " << *ip << endl;

    cout << "funcp(ip) returns " << funcp(ip);
    cout << ", i == " << i << ", *ip == " << *ip << endl;

    cout << "funcp(&i) returns " << funcp(&i);
    cout << ", i == " << i << ", *ip == " << *ip << endl;




    return 0;
}
