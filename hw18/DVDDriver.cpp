#include<iostream>
#include"DVD.h"

int main(){

Dvd starwars(10,"starwars","georgelucas");
Dvd inception;

std::cout << "\n-------------Default--------------------\n";
starwars.display();

starwars.setId(100);
starwars.setTitle("Not starwars");
starwars.setDirector("Not George Lucas");

std::cout << "\n---------Everything is changed--------\n";

starwars.display();

inception = starwars;

std::cout << "\n---------Evertying is copyied--------\n";

inception.display();

std::cout << "\n";

    return 0;
}