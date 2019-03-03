#include"sd_fun.h"

void change_one(int a, int &b) {
    ++a;
    ++b;
}

int main() {
    init();
    int x = 3;
    int y = 3;
    change_one(x,y);
    check_equal( x, 3 );
    check_equal( y, 4 );
    quit();
}