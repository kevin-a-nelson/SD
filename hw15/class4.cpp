#include <iostream>
using namespace std;

class Weapon{
    double damage;
    public:
    Weapon(double d) {damage = d;}
    double AOE() {return 3.14*damage;}
};

int main(){
    Weapon AK47(100);
    Weapon Sniper = 50;
    Weapon Laser_gun{30};
    Weapon Gun = {10};

    cout << "AOE: " << AK47.AOE() << "\n";
    cout << "AOE: " << Sniper.AOE() << "\n";
    cout << "AOE: " << Laser_gun.AOE() << "\n";
    cout << "AOE: " << Gun.AOE() << "\n";
}