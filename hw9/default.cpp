#include"prelude"

// ctrl shift b isn't working so I havn't tested

void products(int x1, int x2, int x3=0, int x4 = 0, int x5=0) {
int result = x1 * x2 * x3 * x4 * x5;
return result;
}

write_at(yaml,0,products(1,2,3));
write_at(yaml,5,products(1,2,3,4,5));
write_at(yaml,10,products(1,2));

#include"postlude"