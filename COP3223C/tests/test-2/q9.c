/*
    (This is from a previous textbook) Write a program that prints a one-month calendar. The 
    user specifies the number of days in the month and the day of the week on which the month begins:

    Enter number of days in month: 31
    Enter starting day of the week (1=Sun, 7=Sat): 3
    The month calendar is below:
              1  2  3  4  5
        6  7  8  9 10 11 12
       13 14 15 16 17 18 19
       20 21 22 23 24 25 26
       27 28 29 30 31

    Hint: The most important part of the solution is a for statement that uses a variable i to count from
    1 to n, where n is the number of days in the month, printing each value of i. Inside the loop, an if
    statement tests whether i is the last day in a week; if so, it prints a new line character.
*/

#include <stdio.h>

int main()
{
    int days, start;
    
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    // Print blanks before the starting day
    // Two spaces for one calendar day and one space for the room
    // for the next day
    for (int i = 1; i < start; i++)
    {
        printf("   ");
    }


    // Print the calendar
    for (int i = 0; i < days; i++)
    {
        printf("%2d ", (i + 1));
        if ((start + i) % 7 == 0)
            printf("\n");
    }
    printf("\n");

    return 0;
}   