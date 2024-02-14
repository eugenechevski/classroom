#include <string.h>
#include <stdio.h>

int main(){

char my_array[15];
char *my_array_ptr;

strcpy(my_array, "niels");

my_array_ptr = my_array;

my_array_ptr += 5;
*my_array_ptr = 'l';

my_array_ptr++;
*my_array_ptr = 'o';

my_array_ptr++;
*my_array_ptr = '\0';

my_array_ptr = my_array;

printf("string=%s\n",my_array_ptr);

return 0;
}

