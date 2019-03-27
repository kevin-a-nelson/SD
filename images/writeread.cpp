#include<fstream>
#include<iostream>
using namespace std;

int main(){
    
    ofstream f("output2.txt");

    f << "Mundo is an amazing champion in league of legends!" << endl;
    f.close();

    ifstream g("output2.txt");

    char * message = new char[100];

    g >> message;
    g.close();

    cout << "The message is: " << message << endl;



    // return 0;
}