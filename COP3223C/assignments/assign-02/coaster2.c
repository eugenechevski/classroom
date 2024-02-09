/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    02/24/2024
    Assignment 2, Part A
    The program calculates the maximum number of people that can be supported on a track at one time.
*/

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

#include <stdio.h>

int main()
{
    // Declare variables
    int max_track_len, max_train_len, cars_per_train, max_trains, total_people;

    // Read inputs
    printf("What is the total length of the track, in feet? \n");
    scanf("%d", &max_track_len);

    max_track_len *= 0.25;

    printf("What is the maximum length of a train, in feet? \n");
    scanf("%d", &max_train_len);

    // Compute the result
    int max_people = 0, max_cars = 0, n_cars = 1, n_trains, total_cars, cumul_car_len, people;
    float average_ratio = 0.0;
    for (int TL = FIRST_CAR_LENGTH; TL <= max_train_len; TL += NORMAL_CAR_LENGTH)
    {
        n_trains = max_track_len / TL;
        total_cars = n_trains * n_cars;
        cumul_car_len = n_trains * TL;
        people = total_cars * CAR_CAPACITY;

        if (people > max_people)
        {
            max_people = people;
            max_cars = n_cars;
        }

        average_ratio += (float)people / (float)cumul_car_len;
        n_cars++;
    }

    average_ratio /= n_cars - 1;

    // Print the results
    printf("You ride can have at most %d people on it at one time.\n", max_people);
    printf("This can be achieved with trains of %d cars.\n", max_cars);
    printf("AVG Ratio: %.3f\n", average_ratio);

    return 0;
}