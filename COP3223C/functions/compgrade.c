// Arup Guha
// 9/27/05
// Example program with a function shown in class on 9/27/05.
// This program calculates a student's overall GPA, given the grades
// the student has earned in each class, as well as the number of
// credit hours for each class.
#include <stdio.h>

// function prototype: should be included BEFORE main.
int Comp_Grade(char grade);

int main() {

  // Declare and initialize variables.
  int total_points = 0, total_hours = 0, c_hours;
  char ans = 'y', my_grade, dummy;

  // Loop until the user has no more grades to enter.
  while (ans == 'y' || ans == 'Y') {

    // Read in the information about one class.
    printf("Enter your letter grade.\n");
    scanf("%c%c", &my_grade, &dummy);
    printf("Enter the number of credit hours for that class.\n");
    scanf("%d", &c_hours);

    // Adjust the total number of GPA points and credit hours for the
    // the student accordingly.
    total_points += c_hours*Comp_Grade(my_grade);
    total_hours += c_hours;

    // See if there's another grade for the user to enter.
    printf("Do you have another grade to enter?\n");
    scanf("%c%c%c", &dummy, &ans, &dummy);
  }

  // Print out the result.
  printf("Your GPA is %.2lf\n", (double)total_points/total_hours);

  return 0;
}

// Precondition: grade MUST BE one of the following: 'A', 'B', 'C', 'D',
//               or 'F'.
// Postcondition: A integer value in between 0 and 4 will be returned 
//                corresponding to the point value of the given grade.
//                If grade is invalid, -1 will be returned.
int Comp_Grade(char grade) {

  if (grade == 'A')
    return 4;
  else if (grade == 'B')
    return 3;
  else if (grade == 'C')
    return 2;
  else if (grade == 'D')
    return 1;
  else if (grade == 'F')
    return 0;
  else
    return -1;
}
