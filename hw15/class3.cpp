// class constructor
#include<iostream>

using namespace std;

class Spaceship {
    double speed, time;
    public:
    Spaceship(int s) {speed = s; time = 50;}
    Spaceship(int s, int t) {speed = s; time = t;}
    double distance(){return (speed*time);}
};

// Spaceship::Spaceship(int a, int b){
//     speed = a;
//     time = b;
// }

int main(){
    Spaceship Milenium_Falcon(1000,50);

    cout << "The Milenium Falcon Travles " << Milenium_Falcon.distance() << " parsecs in 50 hours" << endl;

    Spaceship Noob(10);

    cout << "The Noob Travels " << Noob.distance() << " parsecs in 50 hours" << endl; 


}