// Arup Guha
// 10/14/07
// This program calculates the length of the opposite side of an angle
// in a triangle given that angle and the two adjacent side lengths.

#include <stdio.h>

#define PI 3.14159265358979

double my_sqrt(double x);
double my_abs(double x);
double my_pow(double base, int exp);
int my_fact(int n);
double my_cos(double radians);

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
    sumsq = sumsq - 2*a*b*my_cos(Crad); 

    printf("The length of side c is %lf\n", my_sqrt(sumsq));
    system("PAUSE");
    return 0;
}

// Returns the square root of x within a certain tolerance.
double my_sqrt(double x) {

    // Keep on making guesses until our guess is very close.
    double guess = 1;
    while ( my_abs(guess*guess - x) > 0.000001)
    
        // This is always guaranteed to be a better guess than the last one.
        guess = (guess + x/guess)/2;
    return guess;
}

// Returns the absolute value of x.
double my_abs(double x) {

    if (x >= 0)
        return x;
    else
        return -x;
}

// Returns base raised to the exp power, exp >= 0.
double my_pow(double base, int exp) {

    double answer = 1;
    int i;
    
    // Multiply base exactly exp times.
    for (i=0; i<exp; i++)
        answer = answer*base;
    return answer;
}

// Returns n! 0 <= n <= 12.
int my_fact(int n) {

    int answer = 1;
    int i;
    
    // Multiply in each number.
    for (i=2; i<=n; i++)
        answer = answer*i;
    return answer;
}

// Returns the cosine of the angle radians, measured in radians.
double my_cos(double radians) {

    double answer = 1; // Put the first term into answer already.
    int sign = -1; // Get the sign ready for term number two.
    int exp;
    
    // Just calculate the first six terms of the Taylor series expansion.
    for (exp = 2; exp<=10; exp +=2) {
        
        // The next term is listed below.
        answer = answer + sign*my_pow(radians,exp)/my_fact(exp);
        
        // Sign flips each time.
        sign = -sign;
    }
    return answer;
}

