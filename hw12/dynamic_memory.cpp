#include<iostream>
using namespace std;

int main()
{
    // int*ptr;
    // ptr = new int;

    // *ptr = 10;
    // *ptr += 127;

    // cout << *ptr << endl;

    // delete ptr;

// Bad way 
    // cout << "How big do you want your array?";
    // int size;
    // cin >> size;
    
    // int array[size];
// Good Way
    // cout << "How big do you want your array? ";
    // int size;
    // cin >> size;
    // int * array = new int[size];

    // delete [] array;
// With For Loop
    // cout << "How big do you want your array? ";
    // int size;
    // cin >> size;
    // int * array = new int[size];
    // for (int i = 0; i < size; i++)
    // {
    //     array[i] = 7*i;
    // }

    // cout << "~~Array~~" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << endl;
    // }

    // delete [] array;
// Characters 
    // char * name = new char[7];
    // name[0] = 'J';
    // name[1] = 'o';
    // name[2] = 'e';
    // name[3] = '\0';

    // cout << "Your name is " << name << "." << endl;

    // delete [] name;

    // name = new char[6];
    // name[0] = 'M';
    // name[1] = 'a';
    // name[2] = 'r';
    // name[3] = 'i';
    // name[4] = 'o';
    // name[5] = '\0';

    // cout << "Your new name is " << name << "." << endl;

    // delete [] name;
    int a[]{1,2,3};
    int b[4];
    cout << b[0] << endl;

    int* p1 = new int[5];
    int* p2 = new int[6];

    p1[0] = 4;

    cout << p1[0] << endl;
    cout << p2[1] << endl;

    delete[] p1;
    delete[] p2;



    return 0;
}