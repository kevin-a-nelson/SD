#include"HarryPotterDVD.h"

void HarryPotterDVD::display(){
    // DVD::display();
    cout << "[" << DVD::getId() << ".\tHP" << episode << ":" << getTitle() << "/" << getDirector() << "/" << getAntagonist() << "]\n";
}

void HarryPotterDVD::setAntagonist(const char * c){
    delete [] antagonist;
    int c_len;
    for(c_len = 0; c[c_len] != '\0'; c_len++);
    antagonist = new char[c_len+1];
    for(int i = 0; i < c_len; i++){
        antagonist[i] = c[i];
    }
}

HarryPotterDVD HarryPotterDVD::operator=(const HarryPotterDVD &d)
{
    DVD::operator=(d);
    delete [] antagonist;
    episode = d.episode;
    int ant_len;
    for(ant_len = 0;d.antagonist[ant_len] != '\0'; ant_len++);
    antagonist = new char[ant_len+1];
    for(int i = 0; i < ant_len; i++)
    {
        antagonist[i] = d.antagonist[i];
    }
    return *this;
}