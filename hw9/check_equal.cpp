#include"sd_fun.h"

// ctrl shift b isn't working so I havn't tested this

int sum3(int a, int b, int c) {
int result;
result = a + b + c;
return result;
}
int main() {
init();
check_equal( sum3(1, 2, 1), 4 );
check_equal( sum3(2, 2, 2), 6 );
quit();
}