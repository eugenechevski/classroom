// Arup Guha
// 9/10/2018
// Guessing Game

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100

int main(void) {

    srand(time(0));

    // Start my timer.
    int start = time(0);

    // Generate a random number in between 1 and MAX, inclusive.
    int secretnum = 1 + rand()%MAX;
    int guess = -1, numguess = 0;

    // Keep on playing until the guess is correct.
    while (guess != secretnum) {

        // Get the next guess.
        printf("What is your guess?\n");
        scanf("%d", & guess);
        numguess++;

        if (guess < secretnum)
            printf("Sorry, your guess is too low, guess higher.\n");
        else if (guess > secretnum)
            printf("Sorry, your guess is too high, guess lower.\n");
    }

    // Get the time again.
    int end = time(0);

    // Winning message.
    printf("Congrats, you got the secret number, %d in %d guesses.\n", secretnum, numguess);
    printf("It took you %d seconds.\n", end-start);


    return 0;
}
