// Arup Guha
// 9/29/05
// This program is an edited version of the law of cosines program shown
// previously in class. The only difference is that instead of calling
// some functions from the math library, this has code for those functions
// and calls them instead. The only math function call used in this 
// program is cos, since that's a bit more complicated to implement.

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

double my_pow(double base, int exp);
double my_sqrt(double value);
double my_abs(double x);

int main(void) {

  double a, b, angleC, Crad;
  double sumsq;

  // Get user input.
  printf("Enter the lengths of the sides a and b.\n");
  scanf("%lf%lf", &a, &b);

  printf("Enter the measure of angle C, in degrees.\n");
  scanf("%lf", &angleC);

  sumsq = my_pow(a,2)+my_pow(b,2); // Calculate the sum of squares
  Crad = angleC*PI/180; // Convert C to radians

  // Finish Law of Cosines, solving for c squared.
  sumsq = sumsq - 2*a*b*cos(Crad); 

  printf("The length of side c is %lf\n", my_sqrt(sumsq));

  return 0;
} // end main

// Pre-conditions: exp must be non-negative.
// Post-conditions: base raised to the exp power will be returned.
double my_pow(double base, int exp) {

  double ans = 1;
  int i;

  // Multiply base into ans exactly exp times.
  for (i=0; i<exp; i++)
    ans = ans*base;

  return ans;

} // end my_pow


// Preconditions: value is positive.
// Postconditions: The square root of value to two decimal places will be
//                 returned.
double my_sqrt(double value) {

  // Make an initial guess for the square root of value.
  double guess = 1;

  // Keep on making new guesses until one is "close enough."
  while (my_abs(guess*guess - value) > 0.0001) {

    // Make the new guess in between the old one and value divided by it.
    // The reason to do this is it's clear that if guess is greater than
    // the square root of value, then value/guess is less than it, and 
    // vice versa. Thus, averaging the two will always lead to a closer
    // guess than either of those two values.

    guess = (guess+value/guess)/2;
  } 

  return guess;

} // end my_sqrt

// Post-condition: Returns the absolute value of x.
double my_abs(double x) {

  // If x is negative negate it!
  if (x < 0)
    x = -x;

  return x; // x will be non-negative here.

} // end my_abs
