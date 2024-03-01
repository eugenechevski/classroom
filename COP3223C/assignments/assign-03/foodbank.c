/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    03/04/2024
    Assignment 3
    The program implements the food bank system.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char donations_table[100][20], requests_table[100][20];
int donations_amount[100], requests_amount[100];
int donations_length = 0, requests_length = 0;

void initTables();
void readItem(char item[20], int *amount);
void addDonation(char *donation, int amount);
void removeDonation(int index);
void addRequest(char *request_table, int amount);
void popRequest();
void fulfillRequest();
void printStatusReport();
int getIndexOf(char table[100][20], char *item);
void printMenu();

int main()
{
    initTables();
    int option = 0;

    while (1)
    {
        printMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &option);

        if (option == 1) // Add a donation
        {
            char item[20];
            int amount;

            readItem(item, &amount);
            addDonation(item, amount);
        }
        else if (option == 2) // Add a request
        {
            char item[20];
            int amount;

            readItem(item, &amount);
            addRequest(item, amount);
        }
        else if (option == 3) // Fulfill a request
        {
            fulfillRequest();
        }
        else if (option == 4) // Print status report
        {
            printStatusReport();
        }
        else if (option == 5) // Exit
        {
            printf("Thank you for using the software. Bye for now.\n");
            break;
        }
        else
        { // Incorrect input
            printf("Sorry, the option is not on the list. Try again");
        }

        printf("Press any key to continue...");
        char ch;
        scanf("\n%c", &ch);
    }
}

void initTables()
{
    // Initialize donations
    for (int i = 0; i < 100; i++)
    {
        strcpy(donations_table[i], "");
        donations_amount[i] = 0;
    }

    // Initialize requests
    for (int i = 0; i < 100; i++)
    {
        strcpy(requests_table[i], "");
        requests_amount[i] = 0;
    }
}

void readItem(char item[20], int *amount)
{
    printf("\nEnter inventory type: ");
    scanf("%s", item);

    printf("Enter the amount: ");
    scanf("%d", amount);
}

void addDonation(char *donation, int amount)
{
    int index = getIndexOf(donations_table, donation);

    if (index == -1) // Add the new item
    {
        // Find the first empty spot
        for (int i = 0; i < 100; i++)
        {
            if (strcmp(donations_table[i], "") == 0)
            {
                strcpy(donations_table[i], donation);
                donations_amount[i] = amount;
                break;
            }
        }

        donations_length++;
    }
    else // Update the existing one
    {
        donations_amount[index] += amount;
    }

    printf("\nDonation Added!\n");
}

void removeDonation(int index)
{
    strcpy(donations_table[index], "");
    donations_amount[index] = 0;
    donations_length--;
}

void addRequest(char *request, int amount)
{
    // Add the request to the end
    strcpy(requests_table[requests_length], request);
    requests_amount[requests_length] += amount;
    requests_length++;

    printf("\nRequest Added!\n");
}

void popRequest()
{
    // Shift all requests to the left
    for (int i = 1; i <= requests_length; i++)
    {
        strcpy(requests_table[i - 1], requests_table[i]);
        requests_amount[i - 1] = requests_amount[i];
    }

    requests_length--;
}

void fulfillRequest()
{
    // Fulfill the earliest request
    printf("\n--------Fulfilling Requests--------\n");

    // Find the item
    char *item = requests_table[0];
    int index = getIndexOf(donations_table, item);

    if (index == -1) // No such item
    {
        printf("\nCannot be Fulfilled\n");
    }
    else
    {
        if (requests_amount[0] == donations_amount[index]) // Fulfilled
        {
            // Update tables
            removeDonation(index);
            popRequest();

            printf("\nRequest Fulfilled\n");
        }
        else if (requests_amount[0] > donations_amount[index]) // Partially
        {
            // Update amounts
            requests_amount[0] -= donations_amount[index];

            removeDonation(index);

            printf("\nPartially Fulfilled\n");
        }
        else if (requests_amount[0] < donations_amount[index]) // Fulfilled
        {
            // Update amounts
            donations_amount[index] -= requests_amount[0];

            popRequest();

            printf("\nRequest Fulfilled\n");
        }
    }
}

void printStatusReport()
{
    // Print the donations table
    printf("\nPrinting the Donations Table\n\n");
    int count = donations_length, i = 0;
    while (count > 0)
    {
        if (strcmp(donations_table[i], "") != 0)
        {
            printf("%s %d\n", donations_table[i], donations_amount[i]);
            count--;
        }

        i++;
    }
    printf("\n");

    // Print the requests table
    printf("Printing the Request Table\n\n");
    for (int i = 0; i < requests_length; i++)
    {
        printf("%s %d\n", requests_table[i], requests_amount[i]);
    }
}

int getIndexOf(char table[100][20], char *item)
{
    int index = -1;
    for (int i = 0; i < 100; i++)
    {
        if (strcmp(table[i], item) == 0)
        {
            index = i;
            break;
        }
    }

    return index;
}

void printMenu()
{
    printf("\nWelcome to the Food Bank Program\n\n");
    printf("  1. Add a donation\n");
    printf("  2. Add a request\n");
    printf("  3. Fulfill a request\n");
    printf("  4. Print status report\n");
    printf("  5. Exit\n\n");
}