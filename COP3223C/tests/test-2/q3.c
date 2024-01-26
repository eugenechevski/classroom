/* 
  Question 3.

  Write a C program that will read in integers until it encounters the integer –99. 
  Note that –99 could be the first integer. For each other (earlier) integer, if present, 
  you need to compute its squared value, and then print out the integer followed by its squared value, 
  one pair per line with two blanks between the pair. Assume the other integers (besides the –99) are 
  positive, and do not print a line for –99.
*/

#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);

    while (n != -99)
    {
        printf("%d %d\n\n", n, n * n);
        scanf("%d", &n);
    }

    return 0;
}