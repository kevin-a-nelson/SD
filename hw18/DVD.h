#ifndef _DVD_
#define _DVD_
#include<iostream>

class Dvd{
    unsigned int id;
    char * title;
    char * director;
public:
    Dvd operator = (const Dvd &dvd);
    Dvd();
    ~Dvd();
    Dvd(const Dvd &dvd){
        id = dvd.id;
        int t_len = 0;
        int dir_len = 0;
        for(t_len = 0; dvd.title[t_len] != '\0'; t_len++);
        for(dir_len = 0; dvd.director[dir_len] != '\0'; dir_len++);
        title = new char[t_len+1];
        director = new char[dir_len+1];
        for(int i = 0; i < t_len; i++){
            title[i] = dvd.title[i];
        }
        for(int i = 0; i < dir_len; i++){
            director[i] = dvd.director[i];
        }
    }
    Dvd(unsigned int i, const char * t, const char * dir){
        id = i;
        int t_len;
        int dir_len;
        for(t_len = 0; t[t_len] != '\0'; t_len++);
        for(dir_len = 0; dir[dir_len] != '\0'; dir_len++);
        title = new char[t_len+1];
        director = new char[dir_len+1];
        for(int i = 0; i < t_len; i++){
            title[i] = t[i];
        }
        for(unsigned int i = 0; i < dir_len; i++){
            director[i] = dir[i];
        }
    }
    void display();
    unsigned int getId();
    char * getTitle();
    char * getDirector();
    void setId(unsigned int i);
    void setTitle(const char * t);
    void setDirector(const char * d);
};

#endif //_DVD_