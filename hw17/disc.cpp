#include<iostream>
 using namespace std;

 class UltimateFrisbee {
     int size;
     float *data;

     public:
         UltimateFrisbee() {
             size = 0;
             data = 0;
         }

         UltimateFrisbee(int s) {
             size = s;
             data = new float[size];
         }

         UltimateFrisbee(const UltimateFrisbee &uf){
             size = uf.size;
             data = new float[10];
             int len;
             for(len = 0; uf.data[len+1] != '\0'; len++);
             data = new float[len];
             for(int i = 0; i < len; i++)
                data[i] = uf.data[i];
         }

         ~UltimateFrisbee() {
             cout << "bye!" << endl;
             if ( data ) delete [] data;
         }

         void display() {
             cout << "size " << size << endl;
         }
 };

 int main() {
     UltimateFrisbee g1, g2(3);

     UltimateFrisbee g3 = g2;

     g1.display();
     g2.display();
     g3.display();

     return 0;
 }