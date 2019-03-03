#include"sd_fun.h"

int minus_many(int x1, int x2, int x3=0, int x4 = 0, int x5=0) {
    int result = x1 - x2 - x3 - x4 - x5;
    return result;
}

int main() {
    init();
    near_equal( minus_many(1,2,3), -4 );
    near_equal( minus_many(1,2,3,4), -8 );
    near_equal( minus_many(1,2,3,4,5), -13 );
    quit();
}