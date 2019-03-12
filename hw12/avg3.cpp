
 #include<iostream>
 using namespace std;

 int main(){

     int len;
     cin >> len;

     int *seq = new int[len];
     int sum = 0;

     for(int i=0; i < len; ++i){
         cin >> seq[i];
         sum += seq[i];
        //  cout << "Your input was: " << seq[i] << endl;
     }

     int avg = sum / len;

     cout << avg << endl;

     delete [] seq;

     return 0;
 }