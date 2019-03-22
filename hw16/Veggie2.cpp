#include<iostream>
using namespace std;

class Veggie{
    int calories;
    public:
    Veggie(int c){
        calories = c;
    }
    void getCalories(){
        cout << "Calories: " << calories << endl;

    }
};

int main(){
    Veggie tomato(100);

    tomato.getCalories();

    return 0;
}