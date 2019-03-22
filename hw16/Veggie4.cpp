#include<iostream>
using namespace std;

class Veggie{
    int calories;
    int * ptr;
    public:
    Veggie(){
        calories = 10;
    }
    Veggie(const int& num) : ptr(new int(num)){}
    ~Veggie(){delete ptr;}
    // copy constructor:
    Veggie(const Veggie& x) : ptr(new int(x.content())){}
    // : ptr(new int(x.content())){}
    // access content:
    const int& content() const {return *ptr;}
    void getCalories(){
        cout << "Calories: " << calories << endl;

    }
};

int main(){
    Veggie tomato(100);
    Veggie cucumber = tomato;

    cout << "cucumeber's content: " << cucumber.content() << "\n";

    //asdf

    return 0;
}