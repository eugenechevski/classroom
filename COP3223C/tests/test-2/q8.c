/*
    Write a program that prompts the user to enter an integer n, then prints all even squares between
    1 and n. For example, if the user enters 100, the program should print: 4 16 36 64 100
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sq_n;

    printf("Enter a number:\n");
    scanf("%d", &n);

    for (int i = 2; i <= sqrt(n); i++)
    {
        sq_n = i * i;
        if (sq_n % 2 == 0)
        {
            printf("%d ", sq_n);
        }
    }
    printf("\n");

    return 0;
}