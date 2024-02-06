// Arup Guha
// 10/14/07
// This program calculates the length of the opposite side of an angle
// in a triangle given that angle and the two adjacent side lengths.

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

int main(void) {

  double a, b, angleC, Crad;
  double sumsq;

  // Get user input.
  printf("Enter the lengths of the sides a and b.\n");
  scanf("%lf%lf", &a, &b);

  printf("Enter the measure of angle C, in degrees.\n");
  scanf("%lf", &angleC);

  sumsq = pow(a,2)+pow(b,2); // Calculate the sum of squares
  Crad = angleC*PI/180; // Convert C to radians

  // Finish Law of Cosines, solving for c squared.
  sumsq = sumsq - 2*a*b*cos(Crad); 

  printf("The length of side c is %lf\n", sqrt(sumsq));

  return 0;
}
