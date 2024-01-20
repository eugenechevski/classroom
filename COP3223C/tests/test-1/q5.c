/*
    Question 5.

    Write a complete C program that uses a FOR-loop to read in 41 integers. 
    For each of the 41 integers, first multiply the integer by itself; if the result obtained 
    (i.e., the squared value) is greater than 500, the original integer (before it was squared) 
    should be added into a sum that was initialized to zero. After the loop, multiply the sum by 
    itself and then print out the answer as an integer. Assume correct input.
*/

#include <stdio.h>

int main()
{
    int sum = 0, n;

    for (int i = 0; i < 41; i++)
    {
        scanf("%d", &n);
        
        if (n * n > 500)
            sum += n;
    }

    sum *= sum;
    printf("%d", sum);
}