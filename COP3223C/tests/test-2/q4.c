/*
    Question 4.

    Write a complete C program that will first read in an arbitrary number of integers (which it
    should not do anything with) until it encounters the integer –99. Assume it is guaranteed to encounter
    the integer –99. Following this, it will definitely encounter (and hence, it will read in) two integers, 
    a width W, and a height H (you do NOT need to prompt for these). The program is expected to then 
    draw a parallelogram, but draw it upside down. So, given width W and height H, the program should
    print W stars on each of H lines, in such as a manner that the first line should have H – 1 blanks 
    before the stars, and on following lines, the number of blanks should decrease by one. 
    Assume all input is correct. Remember: it may help you to assume that you do NOT need to prompt 
    for anything, and you should make the program ignore the integers (if any) before the integer –99.

    Sample input:
      2 3 7 91 103 4 -99 3 5

    Sample output:
      2w + 1
     _______
         ***| 
        *** | 
       ***  | h
      ***   |
     ***    |
*/

#include <stdio.h>

int main()
{
    int n, w, h;

    while (1)
    {
        scanf("%d", &n);
        if (n == -99)
        {
            scanf("%d %d", &w, &h);
            break;
        }
    }

    int shift = h - 1;
    for (int row = 0; row < h; row++)
    {
        for (int col = 0; col < shift; col++)
        {
            printf(" ");
        }
        for (int col = 0; col < w; col++)
        {
            printf("*");
        }
        shift--;
        printf("\n");
    }
}