#ifndef _HARRYPOTTERDVD_H_
#define _HARRYPOTTERDVD_H_

#include<iostream>

#include"DVD.h"

using namespace std;


class HarryPotterDVD : public DVD{
    int episode;
    char * antagonist;
public:

    HarryPotterDVD operator = (const HarryPotterDVD &d);

    HarryPotterDVD() : DVD(){
        episode = -1;
        antagonist[0] = ' ';
    }

    HarryPotterDVD(const HarryPotterDVD &d) : DVD(d)
    {
        episode = d.episode;
        int ant_len;
        for(ant_len = 0;d.antagonist[ant_len] != '\0'; ant_len++);
        antagonist = new char[ant_len+1];
        for(int i = 0; i < ant_len; i++)
        {
            antagonist[i] = d.antagonist[i];
        }
    }

    ~HarryPotterDVD(){
        delete [] antagonist;
    }
    HarryPotterDVD(unsigned i, const char * t, const char * dir, int n, const char * ant) : DVD(i,t,dir) 
    {
        episode = n;
        int ant_len;
        for(ant_len = 0;ant[ant_len] != '\0'; ant_len++);
        antagonist = new char[ant_len+1];
        for(int i = 0; i < ant_len; i++)
        {
            antagonist[i] = ant[i];
        }
    }
    int getEpisode(){return episode;}
    char * getAntagonist(){return antagonist;}
    void setEpisode(int e){episode = e;}
    void setAntagonist(const char * c);
    void display();
};

#endif