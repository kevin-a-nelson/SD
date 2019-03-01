#include"sd_fun.h"

// ctrl shift b isn't working so I havn't tested this

bool near_equal(double a, double b) {

    if ((a - b) < 1) && ((a - b) > -1)){
        return true;
    } else {
        return false;
    }
}

double multiply_two_doubles(double a, double b) {
double result = a * b;
return result;
}
int main() {
init();
near_equal( multiply_two_doubles(2.5, 3), 7.5 );
near_equal( multiply_two_doubles(.5, .5), .25 );
quit();
}