/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    03/04/2024
    Assignment 3
    The program implements the food bank system.
*/

#include <stdio.h>
#include <string.h>


char donations_table[100][20], requests_table[100][20];
int donations_amount[100], request_amount[100];

void readDonation(char *table, int *amount) ;
void addDonation(char *donation, int amount);
void addRequest(char *request_table, int amount);
void readRequest(char *table, int *amount);
void fulfillRequest();
void printStatusReport();
int getIndexOf(char *table, char *item);
void printMenu();


int main()
{
    int option;

    printMenu();
    scanf("%d", option);

    while(option != 5)
    {
        if (option == 1) // Add a donation
        {
            
        }
        else if (option == 2) // Add a request
        {

        }
        else if (option == 3) // Fulfill a request
        {

        }
        else if (option == 4) // Print status report
        {

        }
        else if (option == 5) // Exit
        {
            printf("Thank you for using the software. Bye for now.\n");
            break;
        } 
        else { // Incorrect input
            printf("Sorry, the option is not on the list. Try again");
        }

        printf("\n");
    }
}

void readDonation(char *table, int *amount) 
{
    printf("Enter inventory type: ");
    scanf("%s", &table);
    
    printf("Enter the amount: ");
    scanf("%d", &amount);
}

void addDonation(char *donation, int amount)
{
    int index = getIndexOf(donations_table, donation);

    if (index == -1) // Add the new item
    {
        // Find the first empty spot
        for (int i = 0; i < 100; i++)
        {
            if (donations_table[i] == NULL) {
                strcpy(donations_table[i], donation);
                donations_amount[i] = amount;
                break;
            }
        }
    }
    else // Update the existing one
    {
        // TODO: do requests that were partially filled with this item
        // TODO: have to be updated as well?
        donations_amount[index] += amount;
    }
}

void addRequest(char *request_table, int amount)
{

}

void readRequest(char *table, int *amount)
{

}

void fulfillRequest()
{

}

void printStatusReport()
{

}

int getIndexOf(char *table, char *item)
{

}

void printMenu()
{
    printf("Welcome to the Food Bank Program\n\n");
    printf("  1. Add a donation\n");
    printf("  2. Add a request\n");
    printf("  3. Fulfill a request\n");
    printf("  4. Print status report\n");
    printf("  5. Exit\n\n");
}