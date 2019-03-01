#include"sd_fun.h"
int sum3(int a, int b, int c) {
int result;
result = a + b + c;
return result;
}
int main() {
init();
check_equal( sum3(1, 2, 1), 5 );
check_equal( sum3(2, 2, 2), 5 );
quit();
}