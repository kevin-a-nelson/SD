// classes example
#include <iostream>
using namespace std;

class Player {
    int kills, deaths;
  public:
    void set_values (int,int);
    double kda() {return kills/deaths;}
};

void Player::set_values (int x, int y) {
  kills = x;
  deaths = y;
}

int main () {
  Player user;
  user.set_values (50,5);
  cout << "KDA: " << user.kda() << endl;
  return 0;
}