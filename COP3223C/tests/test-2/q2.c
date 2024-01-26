#include <stdio.h>

int main()
{
    int a[6] = {0, 3, 5, 7, 4, -1};
    int b[6] = {1, 10, 20, 40, 100, 2000};
    int i, x, temp;
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]); // OUT 1: 0, 3, 5, 7, 4, -1
    printf("\n");

    for (i = 1; i < 6; i++)
    {
        a[i] += a[i - 1]; // 0, 3, 8, 15, 19, 18
    }

    for (i = 0; i < 6; i++)
        printf("%d ", a[i]); // OUT 2: 0, 3, 8, 15, 19, 18
    printf("\n");

    printf("Result is: %f\n", a[5] / 6.); // OUT 3: 3.0

    x = 5;

    for (i = 0; i < x; i++)
    {
        temp = b[x];
        b[x] = b[i];
        b[i] = temp;
        x--;
    }

    for (i = 0; i < 6; i++)
        printf("%d ", b[i]); // OUT 4: [2000, 100, 40, 20, 10, 1]
    printf("\n");

    return 0;
}