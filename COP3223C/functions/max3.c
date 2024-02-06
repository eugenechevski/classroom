// Arup Guha
// 9/28/05
// Example from COP 3223 Lecture on 9/29/05, that utilizes functions to
// determine the largest sum of two values from four inputted values.

#include <stdio.h>

int Max3(int a, int b, int c);

int main() {

  int a, b, c, d;
  int max1, max2;

  // Read in the four values.
  printf("Enter the four values.\n");
  scanf("%d%d%d%d", &a, &b, &c, &d);

  // Find the maximum sum of the first three combinations.
  max1 = Max3(a+b, a+c, a+d);

  // Find the maximum sum of the last three combinations.
  max2 = Max3(b+c, b+d, c+d);

  // Print out the larger of the two combinations.
  if (max1 > max2)
    printf("The sum of the two largest values is %d.\n", max1);
  else
    printf("The sum of the two largest values is %d.\n", max2);

  return 0;
}

// Precondition: All parameters are integers.
// Postcondition: The largest value of the three will be returned.
int Max3(int a, int b, int c) {

  if (a > b && a > c)
    return a;
  else if (b > c)
    return b;
  else
    return c;
}
