/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    01/24/2024
    Assignment 1, Part C
    The program calculates the number of people that can be supported on the track at one time.
*/

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

#include <stdio.h>

int main()
{
    // Declare variables
    int N, track_length, train_maximum, cars_per_train, space_surplus, max_trains, total_people;

    // Read the input for 'N'
    printf("What is the value for N? \n");
    scanf("%d", &N);

    // Perform the loop
    while (--N >= 0)
    {
        // Read inputs
        printf("What is the total length of the track, in feet? \n");
        scanf("%d", &track_length);

        printf("What is the maximum length of a train, in feet? \n");
        scanf("%d", &train_maximum);

        // Calculate the result
        cars_per_train = (train_maximum - FIRST_CAR_LENGTH) / NORMAL_CAR_LENGTH + 1;
        space_surplus = (train_maximum - FIRST_CAR_LENGTH) % NORMAL_CAR_LENGTH;
        max_trains = (0.25 * track_length) / train_maximum;
        total_people = CAR_CAPACITY * cars_per_train * max_trains;

        // Print the result
        printf("Your ride can have at most %d people on it at one time. \n", total_people);

        if (space_surplus == 0)
        {
            printf("Maximum Length fits exactly.");
        }
        else
        {
            printf("Maximum Train Length has surplus of %d feet.", space_surplus);
        }

        // Add spacing for the next output
        if (N > 0)
        {
            printf("\n\n\n\n");
        }
        else
        {
            printf("\n");
        }
    }
}
