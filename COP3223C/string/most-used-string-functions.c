#include <stdio.h>
#include <string.h>

void demonstrateStringFunctions()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char concatStr[12];
    char copyStr[12];
    int len;

    // strlen(): Calculate the length of a string
    len = strlen(str1);
    printf("Length of str1: %d\n", len);

    // strcpy(): Copy one string to another
    strcpy(copyStr, str1);
    printf("Copy of str1: %s\n", copyStr);

    // strcat(): Concatenate two strings
    strcpy(concatStr, str1);
    strcat(concatStr, str2);
    printf("Concatenated string: %s\n", concatStr);

    // strcmp(): Compare two strings
    if (strcmp(str1, str2) == 0)
        printf("str1 and str2 are equal\n");
    else
        printf("str1 and str2 are not equal\n");

    // strchr(): Locate the first occurrence of a character in a string
    char *ptr = strchr(str1, 'l');
    if (ptr != NULL)
        printf("First 'l' found at position: %ld\n", ptr - str1 + 1);
    else
        printf("'l' not found in str1\n");

    // strstr(): Locate a substring within a string
    ptr = strstr(concatStr, "World");
    if (ptr != NULL)
        printf("Substring 'World' found at position: %ld\n", ptr - concatStr + 1);
    else
        printf("Substring 'World' not found\n");
}

void readStringInputSeparatedByDelimiter()
{
    char input[100];
    char delimiter;

    // Prompt user to enter string input
    printf("Enter a string input separated by a delimiter: ");
    fgets(input, sizeof(input), stdin);

    // Prompt user to enter the delimiter
    printf("Enter the delimiter: ");
    scanf(" %c", &delimiter); // Note the space before %c to consume any whitespace characters left by previous inputs

    // Tokenize the input string using strtok()
    char *token = strtok(input, &delimiter);

    // Print each token until no more tokens are left
    while (token != NULL)
    {
        printf("Token: %s\n", token);
        token = strtok(NULL, &delimiter);
    }
}

int main()
{
    return 0;
}