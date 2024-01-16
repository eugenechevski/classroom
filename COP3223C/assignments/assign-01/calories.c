/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    01/24/2024
    Assignment 1, Part B
    The program calculates the weight lost or gained.
*/

#include <stdio.h>

#define WALK_CAL 5
#define STAND_CAL 2
#define DRINK_CAL 20
#define FOOD_CAL 40
#define CALS_PER_POUND 3500

int main()
{
    // Declare variables
    int walking, standing, drinking, eating, calorie_change;
    float weight_change;

    // Get the inputs

    printf("How many minutes were you walking? \n");
    scanf("%d", &walking);

    printf("How many minutes were you standing? \n");
    scanf("%d", &standing);

    printf("How many minutes were you drinking? \n");
    scanf("%d", &drinking);

    printf("How many minutes were you eating? \n");
    scanf("%d", &eating);

    // Calculate the result
    calorie_change = (WALK_CAL * walking + STAND_CAL * standing) -
                     (DRINK_CAL * drinking + FOOD_CAL * eating);
    weight_change = calorie_change / (float)CALS_PER_POUND;

    // Print the result
    if (weight_change >= 0)
    {
        printf("You lost %.3f pounds today!\n", weight_change);
    }
    else
    {
        printf("Weight lost is %.3f pounds.\n", weight_change);
    }
}