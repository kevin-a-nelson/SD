#include<iostream>

using namespace std;

int main(){

    cout << "Type a number: ";
    int n;
    cin >> n;
    n += 1;
    for(int i = 0; i < 20; i++){
        if(n%2 == 0){
            cout << n << endl;
            n++;
        } else {
            n++;
        }
    }
}