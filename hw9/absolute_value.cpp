#include"sd_fun.h"

int absolute_value(int a) {
    if (a > 0){
        return a;
    } else {
        return (a - 2*a);
    }

}
int main() {
    init();
    check_equal( absolute_value(5), 5 );
    check_equal( absolute_value(-3), 3 );
    check_equal( absolute_value(1), 1 );
    quit();
}
