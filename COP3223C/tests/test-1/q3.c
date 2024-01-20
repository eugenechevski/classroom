/*
    Question 3.
    
    Write down the printed output of this program
    ASSUME keyboard input IS: 4
*/

#include <stdio.h>

int main(void)
{
    int p, i, n;
    p = 2;
    i = 3;
    scanf("%d", &n); // n = 4
    while (i <= n) // 3, 4
    {
        if (i < n) // 3 < 4 -> true
            printf("b= %d\n", p); // b=_2
        p = p + i * i; // p = 2 + 9 = 11, p = 11 + 16 = 27
        i++;
    }
    for (i = 6; i < 8; i++) // 6, 7
    {
        printf("c= %d\n", p + i); // c=_33, c=_34
    }
    return 0;
}

/*
    Answer
    
    Out 1: b=_2
    Out 2: c=_33
    Out 3: c=_34
*/