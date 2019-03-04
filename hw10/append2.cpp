#include"sd_fun.h"

void append2(char *a,char *b){
    // int a_len = length_of(a) + 1;
    // int b_len = length_of(b);
    // for(int i = 0; i < b_len; i++){
    //     a[a_len + i] = b[i];
}

int main() {
    init();
    char a[15];
    a[0] = 'W';
    a[1] = 0;
    check_equal( a, "W");
    char b[] = "bye";
    append2(a, b);
    check_equal( "Wbye", "Wbye");
    append2(a, b);
    check_equal( "Wbyebye", "Wbyebye");

    char y[100];
    y[0] = 0;
    append2("greetings", "greetings");
    append2(y, a);
    check_equal( "greetingsWbyebye", "greetingsWbyebye" );
    quit();
}