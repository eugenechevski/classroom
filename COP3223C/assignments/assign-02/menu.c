/*
    Yauheni Khvashcheuski
    COP3223C Section 3
    02/24/2024
    Assignment 2, Part C
    The program present the user with a choice to run one of the solutions from A or B problems.
*/

#include <stdio.h>

void coaster_two_solution();
void lastnames_solution();

int main(){
  // Declare variables
  int choice;

  // Read the input
  while (choice != 3)
  {
    printf("1. Coaster 2, 2. Last names, 3. Quit.\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        coaster_two_solution();
    } else if (choice == 2)
    {
        lastnames_solution();
    } 
    else if (choice == 3) 
    {
        break;
    }

    printf("\n");
  }

  return 0;
}

// coaster2.c

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

void coaster_two_solution()
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
}

// lastnames.c

#include <string.h>

void lastnames_solution()
{
    int n;
    int found = 1;
    char firstToken[100], token[100];

    // Read 'n'
    printf("Enter n, followed by n Last names (each last name must be a single word):\n");
    scanf("%d", &n);

    // Read the first name
    scanf("%s", firstToken);

    // Read the other names
    while ((n--) > 1)
    {
        scanf("%s", token);
        if (strcmp(firstToken, token) == 0)
        {
            found = 0;
            break;
        }
    }

    // Print the result
    printf("The first name in list is%s repeated.", (found == 1) ? " not" : "");
}