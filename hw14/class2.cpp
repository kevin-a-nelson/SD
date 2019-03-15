
// example: class constructor
#include <iostream>
using namespace std;

class Player {
    int kills, assists;
  public:
    Player (int,int);
    int kda () {return (kills+assists);}
};

Player::Player (int a, int b) {
  kills = a;
  assists = b;
}

int main () {
  Player user (3,4);
  Player userb (5,6);
  cout << "User kills and assists: " << user.kda() << endl;
  cout << "User kills and assists: " << userb.kda() << endl;
  return 0;
}