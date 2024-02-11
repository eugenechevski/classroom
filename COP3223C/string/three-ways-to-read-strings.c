/*
Function        Safety          Input handling              Buffer allocation       Newline handling      Notes
----------------------------------------------------------------------------------------------
scanf()         Unsafe          Limited, potential overflow  Fixed size buffer      Excludes newline     %s specifier prone to buffer overflow
fgets()         Safer           Better control              Fixed size buffer      Includes newline     Requires additional handling for newline
getline()       Safer           Dynamic, handles resizing   Dynamically allocated  Includes newline     Requires freeing allocated memory
*/

#include <stdio.h>
#include <stdlib.h>

void readStringScanf() {
    char str[100];
    printf("Enter a string (scanf): ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
}

void readStringFgets() {
    char str[100];
    printf("Enter a string (fgets): ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s\n", str);
}

void readStringGetline() {
    char *str = NULL;
    size_t size;
    printf("Enter a string (getline): ");
    getline(&str, &size, stdin);
    printf("You entered: %s\n", str);
    free(str);
}

int main() {
    return 0;
}
