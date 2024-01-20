/*
    Question 7.

    Write a complete C program that uses a FOR-loop to read in 10 positive integers.
    For each of the 10 integers, if the integer is divisible by 5, the integer should be added into a sum that was initialized to zero. 
    After the loop is completed, multiply the sum by 100 and then print out the answer. Assume correct input.
    For example, if the input from the keyboard is: 11 12 13 14 15 16 17 18 19 20,
    we expect the final outputted answer to be: 3500
*/

#include <stdio.h>

int main()
{
    int sum = 0, n;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        
        if (n % 5 == 0)
            sum += n;
    }

    sum *= 100;
    printf("%d", sum);
}