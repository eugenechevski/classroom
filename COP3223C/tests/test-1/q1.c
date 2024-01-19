/*
    Question 1.
    Write down the printed put of this program.
*/

#include <stdio.h>
int main(void)
{
    float f;
    int a, i;
    a = 4; // 4
    a = a - 1; // 3
    printf("P= %d\n", a); // P=_3
    a += 2; // 5
    a++; // 6
    a = a % 2; // 0
    printf("Q= %4d\n", a); // Q=____0
    i = 2;
    f = 13.0;
    printf("R= %6.2f\n", f / i); // R=___6.50
    a = 13;
    printf("S= %d\n", a / i); // S=_6

    return 0;
}

/*

    Answer

    Out 1: P=_3
    Out 2: Q=____0
    Out 3: R=___6.50
    Out 4: S=_6
*/