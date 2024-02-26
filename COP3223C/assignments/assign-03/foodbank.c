/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    03/04/2024
    Assignment 3
    The program implements the food bank system.
*/

#include <stdio.h>
#include <string.h>

void printMenu();

char donations_inv_type[100][20], requests_inv_type[100][20];
int donations_amount[100], request_amount[100];

int main()
{
    int option;

    printMenu();
    scanf("%d", option);

    while(option != 5)
    {
        if (option == 1)
        {

        }
        else if (option == 2)
        {

        }
        else if (option == 3)
        {

        }
        else if (option == 4)
        {

        }
        else if (option == 5)
        {
            printf("Thank you for using the software. Bye for now.\n");
            break;
        } 
        else {
            printf("Sorry, the option is not on the list. Try again");
        }

        printf("\n");
    }
}

void addDonation(char *donation_item, int amount)
{

}

void addRequest(char *request_item, int amount)
{

}

void fulfillRequest()
{

}

void printStatusReport()
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