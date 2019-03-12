
 #include<iostream>
 using namespace std;

 int main(){

     int *seq = new int[256];

     for(int i=0; i < 256; ++i){
         cin >> seq[i];
         cout << "Your input was: " << seq[i] << endl;
     }

     delete [] seq;

     return 0;
 }