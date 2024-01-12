// Arup Guha
// 9/7/05
// A small example utilizing random number generation. Two users guess at
// a random number in between 1 and 100, and a winner (the person who
// guessed closer) is determined.

// Edited to reflect correct price is right rules on 9/28/2016.

#include <stdio.h>
#include <time.h>
#include <math.h>

#define DEBUG 1

int main() {

    int guess1, guess2;
    int diff1, diff2;
    int secretNum;

    // Seed the random number generator.
    srand(time(0));

    // Example to show how to generate a random number in range [a, b].
    int a = 10;
    int b = 20;
    secretNum = rand()%(b-a+1)+a;

    if (DEBUG)
        printf("The secret number is %d.\n", secretNum);

    // Get both guesses.
    printf("Contestant #1, what number do you guess(1-100)?\n");
    scanf("%d", &guess1);
    printf("Contestant #2, what number do you guess(1-100)?\n");
    scanf("%d", &guess2);

    // Compute how far off each guess is.
    diff1 = guess1-secretNum;
    diff2 = guess2-secretNum;

    // Both busted
    if (diff1>0 && diff2>0)
        printf("Both of you busted. The number was %d!\n", secretNum);

    // Contestant 1 busts, 2 doesn't.
    else if (diff1>0)
        printf("Contestant 2 wins by default. The number was %d!\n", secretNum);

    // Contestant 2 busts, 1 doesn't.
    else if (diff2>0)
        printf("Contestant 1 wins by default. The number was %d!\n", secretNum);

    // Contestant 1 wins
    else if (guess1 > guess2)
        printf("Contestant 1 wins. The number was %d!\n", secretNum);

    // Contestant 2 wins
    else if (guess2 > guess1)
        printf("Contestant 2 wins. The number was %d!\n", secretNum);

    // Would probably never happen!
    else
        printf("You tied.\n");

    return 0;
}
