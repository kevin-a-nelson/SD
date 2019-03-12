 #include<iostream>
 using namespace std;

 int main() {
     int *p0 = new int;
     *p0 = 5;

     int *p1 = new int[3];


     p1[0] = 11;
     p1[1] = 12;
     p1[2] = 13;

     int * temp = p0;
     p0 = p1;
     p1 = temp;


    cout << "*p0==" << *p0 << endl;
     cout << "p1[1]==" << p1[0] << endl;





     delete p0;
     delete [] p1;
 }