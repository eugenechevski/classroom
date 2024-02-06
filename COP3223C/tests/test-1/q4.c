/*
    Question 4.

    Write a complete C program that uses a FOR-loop to read in 50 integers. 
    For each of the 50 integers, if it is greater than 100, it should be added into a sum that was initialized to zero. 
    After the loop, multiply the sum by 85 and then print out the answer. Assume correct input.
*/

#include <stdio.h>

int main()
{   
    int sum = 0, n;
    for (int i = 0; i < 50; i += 1)
    {
        scanf("%d", &n);

        if (n > 100)
            sum += n;    
    }

    sum *= 85;
    printf("%d", sum);
}