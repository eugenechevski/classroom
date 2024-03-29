// Arup Guha
// 11/1/07
// Short program to illustrate the use of the four string functions
// strcmp, strlen, strcat, and strcpy

#include <stdio.h>
#include <string.h>

int main() {


  char first[30], last[30];
  char wholename[60];

  // Read in first and last names.
  printf("Enter your first name.\n");
  scanf("%s", first);
  printf("Enter your last name.\n");
  scanf("%s", last);

  // Print out which one comes first alphabetically.
  if (strcmp(first, last) < 0)
    printf("Your first name comes first alphabetically.\n");
  else if (strcmp(first, last) == 0)
    printf("You're weird.\n");
  else
    printf("Your last name comes first alphabetically.\n");

  // Show the contents of first and last now.
  printf("first = %s, last = %s\n", first, last);

  // Concatenate last into first.
  strcat(first, last);

  // Now we can see how first changed.
  printf("first = %s, last = %s\n", first, last);

  // Make a true copy of the string first into wholename.
  strcpy(wholename, first);

  // Now, we can see that change.
  printf("first = %s, wholename = %s\n", first, wholename);

  // Use the strlen function and reverse the string wholename.
  int i, len = strlen(wholename);
  for (i=0; i<len/2; i++) {
    char tmp = wholename[i];
    wholename[i] = wholename[len-1-i];
    wholename[len-1-i] = tmp;
  }

  // Now, we can see that only wholename got reversed.
  printf("first = %s, wholename = %s\n", first, wholename);

  return 0;
}
