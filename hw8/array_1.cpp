#include"prelude"

  yaml[0] = 0;

  int a[7] = {1,2,3,4,5,6,7};

  for(int i = 0;i < 7; i++){
      a[i] += 3;
  }

  show_int_array(a, 7);


#include"postlude"