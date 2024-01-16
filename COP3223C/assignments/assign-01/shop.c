/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    01/24/2024
    Assignment 1, Part A
    The program calculates the total purchase for an item.
*/

#include <stdio.h>

#define TAX_RATE 0.065

int main()
{
    float total, item_price;
    int quantity, is_tax;

    // Get the item's price
    printf("What is the cost of the item to be purchased (in dollars)? \n");
    scanf("%f", &item_price);

    // Get the quantity of the item
    printf("How many of the item are you purchasing? \n");
    scanf("%d", &quantity);

    // Determine whether it's tax or not
    printf("Is the item a taxed item (1 = yes, 0 = no)? \n");
    scanf("%d", &is_tax);

    // Do the calculations and print the result
    total = item_price * quantity;
    total = total + total * TAX_RATE * is_tax;
    printf("Your total purchase will cost $%.2f.\n", total);
}
