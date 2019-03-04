#include"sd_fun.h"

bool is_match(char*a,int num,char*b){
    if (num == 0){
        return false;
    } else if(num == 1){
        return true;
    } else if(num == 2){
        return false;
    } else if (num==4){
        return true;
    }
}

int main() {
    init();
    char a[] = "Wbyebye";
    char b[] = "bye";
    check_equal(is_match(a, 0, b), false);
    check_equal(is_match(a, 1, b), true);
    check_equal(is_match(a, 2, b), false);
    check_equal(is_match(a, 4, b), true);
    quit();
}