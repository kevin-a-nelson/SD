#include<iostream>
#include"DVDArray.h"
using namespace std;

int main()
{

    DVD phantom_menace(1,"Phantom Menace","George Lucas");
    DVD clone_wars(2,"Clone Wars","George Lucas");
    DVD revenge_of_the_sith(3,"Revenge of the Sith","George Lucas");

    DVDArray starwars_collection3;

    cout <<"__[] OPERTATOR TEST__\n";
    starwars_collection3[0] = phantom_menace;
    starwars_collection3[1] = clone_wars;
    starwars_collection3[2] = revenge_of_the_sith;

    starwars_collection3.display();


    DVD * starwars_saga = new DVD[3];

    starwars_saga[0] = phantom_menace;
    starwars_saga[1] = clone_wars;
    starwars_saga[2] = revenge_of_the_sith;

    DVDArray starwars_collection(3,starwars_saga);

    cout << "__ORIGINAL DVDarray OBJ__" << "\n";

    starwars_collection.display();

    cout <<"__COPY CONSTRUCTOR CHECK__" << "\n";
    DVDArray starwars_collection2(starwars_collection);
    starwars_collection2.display();

    cout << "__EQUAL OPERATOR CHECK__"<<"\n";
    starwars_collection3 = starwars_collection2;
    starwars_collection3.display();

    return 0;
}