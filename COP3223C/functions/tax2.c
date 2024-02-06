// Arup Guha
// 9/27/05
// Example shown in COP 3223 illustrating a program with a function call.
// The program allows the user to enter in the price and tax rate for
// several items can calculates the total spent by the user.

#include <stdio.h>

// function prototypes: These should appear before main.
double Total_With_Tax(double, double);

int main(void) {

  // Declare variables.
  char ans, dummy;
  double total_price=0, price, tax_rate;
  char name[10];

  // See if there is an item to buy.
  printf("Is there another item to buy?\n");
  scanf("%c", &ans);

  // Loop as long as there are more items to buy.
  while (ans == 'y'|| ans == 'Y') {
 
    // Read in the price and tax rate for the current item.
    printf("Enter the item price and tax rate.\n");
    scanf("%lf%lf", &price, &tax_rate);

    // price and tax_rate are actual parameters.
    // Add the price of this item to the tally.
    total_price += Total_With_Tax(price, tax_rate);

    // See if there's another item to buy.
    printf("Is there another item to buy?\n");
    scanf("%c%c", &dummy, &ans);
  }

   // Print out the result.
   printf("The total is %.2lf.\n", total_price);

   return 0;
} // end main


// Precondition: value is positive and tax_rate is expressed as a decimal
//               and not a percentage. Thus, tax_rate is in between 0 and
//               1.
// Postcondition: The total cost of an item with sticker price value taxed
//                at tax_rate is returned.

// Note: value and tax_rate are formal parameters

double Total_With_Tax(double value, double tax_rate) {
  return value*(1+tax_rate);
}
