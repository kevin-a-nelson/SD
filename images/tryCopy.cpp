 #include<iostream>
 #include<string>

 using namespace std;
 
 void copyString(char *&a,const char *b){

     a = new char[6];
     for(int i = 0; i < 6; i++){
         a[i] = b[i];
     }
 }


 int main(){
     const char *str1 = "Hello!";
     char *str2;
     copyString(str2, str1);
     cout << "str1 is " << str1 << " and str2 is " << str2 << endl;
     delete [] str2;
     return 0;
 }