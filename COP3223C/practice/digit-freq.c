#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int freq[10];
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }
    
    char *s;
    size_t size = 0;
    getline(&s, &size, stdin);
    
    for (int i = 0; i < size; i++)
    {
        if (isdigit(*(s + i)))
        {
            freq[*(s + i) - '0']++;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", freq[i]);
    }
    
    return 0;
}
