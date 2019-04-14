#include<iostream>
#include"HarryPotterDVD.h"

int main(){

    HarryPotterDVD one(1,"pheonix","george",1,"tom");

    HarryPotterDVD two = one;

    // HarryPotterDVD three;

    one.display();
    two.display();
    two.setAntagonist("Not tom");
    two.display();
    two.setEpisode(10);
    two.display();

    


    return 0;
}