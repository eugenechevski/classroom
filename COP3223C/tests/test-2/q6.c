/*
    Write a program that will read in and decide if a given integer is prime (a prime number is
    divisible by only 1 and itself).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter an integer number to check:\n");
    scanf("%d", &n);

    int isPrime = 1;
    // Run through all the factors from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }

    return 0;
}