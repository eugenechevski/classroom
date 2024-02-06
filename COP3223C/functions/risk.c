// Arup Guha
// 2/4/04
// Example for 2/5/04 COP 3223 Lecture: Use of prewritten C functions.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int a_roll1, a_roll2, d_roll1, d_roll2, temp, sum = 0;

  srand(time(0)); // Seed random number generator.

  // Do rolls for the attacker and defender.
  a_roll1 = 1 + rand()%6;
  a_roll2 = 1 + rand()%6;
  d_roll1 = 1 + rand()%6;
  d_roll2 = 1 + rand()%6;

  // Print out the rolls.
  printf("The attackers rolls are %d and %d\n", a_roll1, a_roll2);
  printf("The defenders rolls are %d and %d\n", d_roll1, d_roll2);

  // Order a_roll1, a_roll2 in decreasing order.
  if (a_roll1 < a_roll2) {
    temp = a_roll1;
    a_roll1 = a_roll2;
    a_roll2 = temp;
  }

  // Order d_roll1, d_roll2 in decreasing order.
  if (d_roll1 < d_roll2) {
    temp = d_roll1;
    d_roll1 = d_roll2;
    d_roll2 = temp;
  }

  // Calculate wins for the attacker.
  if (a_roll1 > d_roll1) sum++;
  if (a_roll2 > d_roll2) sum++;

  printf("The attackers killed %d armies.\n", sum);

  return 0;
}
