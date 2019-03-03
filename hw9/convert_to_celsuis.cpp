#include"sd_fun.h"

int convert_to_celsius(int f) {
    return 5*(f-32)/9;

}
int main() {
    init();
    near_equal( convert_to_celsius(95), 35 );
    near_equal( convert_to_celsius(32), 0 );
    near_equal( convert_to_celsius(-40), -40 );
    quit();
}
