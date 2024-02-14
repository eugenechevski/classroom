#include <stdio.h>

int main(){

int i;
int *i_ptr;

i_ptr = &i;

i = 10;

(*i_ptr) = 24;

if(i == 10) {
  printf("i1=%d\n", i);
}
if(i == 24) {
  printf("i2=%d\n", *i_ptr);
}

return 0;
}

