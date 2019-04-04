#include"DVD.h"

Dvd::Dvd(){
    id = 0;
    title = NULL;
    director = NULL;
}
Dvd::~Dvd(){
    delete [] title;
    delete [] director;
}

void Dvd::display(){
    std::cout << "ID: " << id << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Director: " << director << "\n";
}

unsigned int Dvd::getId(){
    return id;
}

char * Dvd::getTitle(){
    char * temp;
    int len;
    for(len = 0;title[len] != '\0';len++);
    temp = new char[len+1];
    for(int i = 0; i < len;i++){
        temp[i] = title[i];
    }
    return temp;
}

char * Dvd::getDirector(){
    char * temp;
    int len;
    for(len = 0;director[len] != '\0';len++);
    temp = new char[len+1];
    for(int i = 0; i < len;i++){
        temp[i] = director[i];
    }
    return temp;
}

void Dvd::setId(unsigned int i){
    id = i;
}

void Dvd::setTitle(const char * t){
    int len;
    for(len = 0; t[len] != '\0'; len++)
        title = new char[len+1];
    for(int i = 0; i < len; i++)
        title[i] = t[i];
}

void Dvd::setDirector(const char * d){
    int len;
    for(len = 0; d[len] != '\0'; len++)
        director = new char[len+1];
    for(int i = 0; i < len; i++)
        director[i] = d[i];
}

Dvd Dvd::operator = (const Dvd &dvd){
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