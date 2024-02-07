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

    while (!(n > 0 && n % 2 != 0))
    {
        printf("It's not a valid number, try again.\n");
        scanf("%d", &n);
    }

    // Draw the diamond
    int ROWS = n;
    int spaces = n / 2, rate = 1;

    for (int row = 0; row <= ROWS; row++)
    {
        // Draw spaces
        for (int col = 0; col < spaces; col++)
        {
            printf(" ");
        }

        // Draw stars
        for (int col = 0; col < ROWS - 2*spaces; col++)
        {
            printf("*");
        }

        if (row == ROWS / 2)
        {
            rate = -1;
        }

        spaces -= rate;
        printf("\n");
    }

    return 0;
}