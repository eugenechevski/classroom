/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    02/24/2024
    Assignment 2, Part B
    The program prints whether the first last name is in a list of last names or not.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int found = 1;
    char firstToken[100], token[100];

    // Read 'n'
    printf("Enter n, followed by n Last names (each last name must be a single word):\n");
    scanf("%d", &n);

    // Read the first name
    scanf("%s", firstToken);

    // Read the other names
    while ((n--) > 1)
    {
        scanf("%s", token);
        if (strcmp(firstToken, token) == 0)
        {
            found = 0;
            break;
        }
    }

    // Print the result
    printf("The first name in list is%s repeated.", (found == 1) ? " not" : "");
    return 0;
}