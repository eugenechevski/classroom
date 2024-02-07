/*
    Write a C program that asks the user to enter one float at a time. As long as the user continues to enter 
    descending floats (the newest float is less than the previous one entered) the program should report
    the product of the current and previous number (except for the first float entered). If the user enters
    a number that is not smaller than their last response, the program should tell them so and exit. You
    can assume that for each run of the program, the user will enter at least two floats, and will not try to
    trick the program; so, you do not need to check for errors in what the user types in.
*/

#include <stdio.h>

int main()
{
    float prev, curr;

    printf("Enter a float number:\n");
    scanf("%f", &curr);

    while (1)
    {
        prev = curr;
        printf("Enter a float number that is less than the previous one:\n");
        scanf("%f", &curr);
        
        if (prev > curr)
        {
            printf("%f\n", prev * curr);
        } else {
            printf("Your number is not less than the previous one. Bye!\n");
            break;
        }
    }

    return 0;
}