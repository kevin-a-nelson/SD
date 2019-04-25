#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> price;
    price["socks"] = 1000;
    price["shoes"] = 3000;
    cout << price["socks"] << endl;
    cout << price.size() << endl;

    return 0;
}


