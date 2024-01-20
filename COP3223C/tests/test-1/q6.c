/*
    Question 6.

    Write a complete C program that uses a FOR-loop to read in 10 integers. 
    For each of the 10 integers, the program first multiplies the integer by 10, if the result obtained (i.e.,
    after multiplying by 10) is greater than 85, the integer (as it was read in, i.e., before it was 
    multiplied) should be added into a sum that was initialized to zero. After the loop is completed, 
    multiply the sum by 100 and then print out the answer. Assume correct input. 
    For example, if the input from the keyboard is: 1 2 3 4 5 6 7 8 9 10,
    we expect the final outputted answer to be: 1900
*/

#include <stdio.h>

int main()
{
    int sum = 0, n;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        
        if (n * 10 > 85)
            sum += n;
    }

    sum *= 100;
    printf("%d", sum);
}