#include<iostream>
#include"DVD.h"
using namespace std;

DVD::DVD(){
    id = 0;
    title = new char[1];
    director = new char[1];
    title[0] = 0;
    director[0] = 0;
}
DVD::~DVD(){
    delete [] title;
    delete [] director;
}

void DVD::display(){
    std::cout << "["<< id << ".\t" << title << "/" << director << "]";
}

unsigned int DVD::getId(){
    return id;
}

char * DVD::getTitle(){
    char * temp;
    int len;
    for(len = 0;title[len] != '\0';len++);
    temp = new char[len+1];
    for(int i = 0; i < len;i++){
        temp[i] = title[i];
    }
    return temp;
}

char * DVD::getDirector(){
    char * temp;
    int len;
    for(len = 0;director[len] != '\0';len++);
    temp = new char[len+1];
    for(int i = 0; i < len;i++){
        temp[i] = director[i];
    }
    return temp;
}

void DVD::setId(unsigned int i){
    id = i;
}

void DVD::setTitle(const char * t){
    int len;
    for(len = 0; t[len] != '\0'; len++)
        title = new char[len+1];
    for(int i = 0; i < len; i++)
        title[i] = t[i];
}

void DVD::setDirector(const char * d){
    int len;
    for(len = 0; d[len] != '\0'; len++)
        director = new char[len+1];
    for(int i = 0; i < len; i++)
        director[i] = d[i];
}

DVD DVD::operator = (const DVD &dvd){
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
    return *this;
}

 int DVD::operator ++(){
    id++;
    return id;
}
int DVD::operator ++(int){
    int temp = id;
    id++;
    return temp;
}