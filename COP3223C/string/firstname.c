// Arup Guha
// 4/5/06
// A short program that illustrates the use of the string functions
// strcmp and strcpy. The program prompts the user to enter several
// names and outputs the name that appears first alphabetically of
// the list and how many times that name appeared.

#include <stdio.h>
#include <string.h>

int main() {

  char curname[30], firstname[30];
  int numstuds, i, freq = 1;

  // Read in the number of students.
  printf("How many names do you want to enter?\n");
  scanf("%d", &numstuds);

  // Read in each name.
  printf("Enter each of their names.");
  for (i=0; i<numstuds; i++) {

    // Read the current name.
    scanf("%s", curname);

    // Always update the best seen for the first name.
    if (i==0)
      strcpy(firstname, curname);

    // Update if it's better than all previous names.
    else if (strcmp(curname, firstname) < 0) {
      strcpy(firstname, curname);
      freq=1;
    }

    // We've seen another "first" name, keep track of it.
    else if (strcmp(curname, firstname) == 0)
      freq++;
  }

  // Output the results.
  printf("The first person is %s\n", firstname);
  printf("They appear %d number of times.\n", freq);

  return 0;
}
