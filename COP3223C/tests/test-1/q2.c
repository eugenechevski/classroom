/*
    Question 2.
    Trace the following program
*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 3, c = 4;
    a += 1; // a = 6

    if (b > c) // 3 > 4 -> false
        printf("a= %d\n", a + 4);
    else
        printf("b= %d\n", b); // b=_3

    b -= 2;     // b = 1
    if (a <= b) // 6 <= 1 -> false
    {
        printf("c= %d\n", a + c);
    }
    else
    {
        if (b > c) // 1 > 4 -> false
            printf("d= %d\n", a + c);
        else
            printf("f= %d\n", c); // f=_4
    }

    return 0;
}

/*
    Answer

    Out 1: b=_3
    Out 2: f=_4
*/