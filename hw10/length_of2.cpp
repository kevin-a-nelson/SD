#include"sd_fun.h"

int length_of2(char a[]){
    int i;
    while(a[i] != 0){
        i++;
    }
    return i;
}

int main() {
    init();
    char a[] = "hello";
    check_equal( length_of2(a), 5 );
    check_equal(9,9);
    quit();
}