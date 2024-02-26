/*
    Write a program to prompt for and read in an odd positive integer and produce a diamond 
    shape on the page made up of asterisks; the number is the height, and also the breadth.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an odd positive integer:\n");
    scanf("%d", &n);

    int rate = 1, stars = 1;
    for (int i = 0; i < n; i++)
    {
        // print spaces before
        for (int j = 0; j < n - stars; j++)
            printf(" ");
        // print stars
        for (int j = 0; j < 2 * stars - 1; j++)
            printf("*");

        if (i == n / 2)
            rate = -1;
        stars += rate;
        printf("\n");
    }

    return 0;
}