// Arup Guha
// 1/29/04
// This program is intended to calculate the probability that if a person
// rolls two fair sixed-sided dice, that they will get a total of 8. This
// is done by looping through all the possibilities and counting those that 
// do not have a sum that exceeds 9. However, there are some bugs in this
// file. Can you find them?
#include <stdio.h>

int main() {

  int count, total, sum;

  for (int i=1; i<6; i++)
    for (int j=0; j<=6; j++)
      sum = i+j;
      if (sum <= 8)
        count++;
      total++;

  printf("The probability of rolling an 8 is %lf.\n", (float)count/total);

  return 0;
}
