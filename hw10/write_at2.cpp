#include"sd_fun.h"


void write_at2(char*a,int num,char*b){
    int x = length_of(a);
    for(int n = 0; n < x; n++){
        if(n<(num+x)){
            a[num+n] = b[n];
        } else {
            a[num+n] = 0;
        }
    }
}

int main() {
    init();
    char a[] = "hello";
    char b[] = "bye";
    write_at2(a, 1, b);
    check_equal(a, "hbye");

    char y[100];
    y[0] = 0;
    append(y, "greetings");
    write_at2(y, 3, b);
    check_equal(y, "grebye");
    quit();
}