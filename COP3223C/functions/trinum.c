// Arup Guha
// 10/14/04
// COP 3223 Class Example: A program that uses a function that calculates
// the nth triangle number to print out the first 20 triangle numbers.

#include <stdio.h>

int Triangle_Number(int n);

int main(void) {

  int index;

  // Print out the first 20 triangle numbers.
  for (index=1; index<=20; index++)
    printf("%d triangle number is %d\n", index, 
Triangle_Number(2.7));

}

// Precondition: n is positive.
// Postconditin: Returns the nth triangle number.
int Triangle_Number(int n) {

  int index=1, sum=0;

  // Return 0 for invalid values of n.
  if (n < 1)
    return 0;

  // Sum up 1+2+...+n
  for (index=1; index<=n; index++)
    sum += index;

  return sum; // return the answer.
}
