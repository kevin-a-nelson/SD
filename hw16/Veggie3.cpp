#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Veggie{
    int calories;
    public:
    Veggie(int c){
        calories = c;
    }
    Veggie(){
        calories = 10;
    }
    void getCalories(){
        cout << "Calories: " << calories << endl;

    }
};

int main(){
    Veggie tomato(100);
    Veggie cucumber;

    tomato.getCalories();
    cucumber.getCalories();

    return 0;
}