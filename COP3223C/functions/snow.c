// Arup Guha
// 2/20/06
// COP 3223 Class Exercise: Functions
// This program computes the mass of a snowman given the radii
// of the three snowballs used to create it.

#include <stdio.h>

#define PI 3.14159
#define SNOW_DENSITY 0.1

// Function prototypes
double Sphere_Volume(double radius);
double Mass(double den, double volume);

int main() {

  double r1, r2, r3;
  double total_V, total_M;

  // Get the sizes of the three snowballs.
  printf("Enter the three radii of snowballs.");
  scanf("%lf%lf%lf", &r1, &r2, &r3);

  // Calculate their total volume, then total mass.
  total_V = Sphere_Volume(r1) + Sphere_Volume(r2)+Sphere_Volume(r3);
  total_M = Mass(SNOW_DENSITY, total_V);

  // Print this out.
  printf("The mass of your snowman in grams is %lf.\n", total_M);

  return 0;
}

// Pre-condition: radius must be positive.
// Post-condition: The volume of a sphere with a radius of
//                 radius is returned (in the same units as
//                 the radius was given.)
double Sphere_Volume(double radius) {
  return 4*PI/3*radius*radius*radius;
}

// Pre-condition: den and volume must be positive. The unit
//                used for volume must correspond to that used
//                for density.
// Post-condition: The function will return the mass of the object
//                 with the given density den and volume volume.
double Mass(double den, double volume) {
  return den*volume;
}
