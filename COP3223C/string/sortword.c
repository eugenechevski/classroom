// Arup Guha
// 11/12/03
// COP 3223 Class Example: Sorting book titles. Illustrates the use of
//                         the C string functions strcmp, strcpy and strlen
#include <stdio.h>

#define NUMWORDS 10
#define MAXLEN   80

int readwords(char words[][MAXLEN], char *infile);
void printwords(char words[][MAXLEN], int length);
void sort(char words[][MAXLEN], int length);
int maxlength(char words[][MAXLEN], int length);

int main() {

  int num;
  char words[NUMWORDS][MAXLEN];
  char infile[MAXLEN];

  printf("Enter the file with the unsorted titles.\n");
  scanf("%s", infile);

  num = readwords(words, infile);
  printf("Unsorted list:\n");
  printwords(words, num);

  sort(words, num);
  printf("\nSorted list:\n");
  printwords(words, num);

  printf("The longest title has %d characters in it.\n",maxlength(words, num));

  return 0;
}

// Reads in the titles from the file pointed to by infile into the array
// of strings, words. No string length may exceed MAXLEN-1.
int readwords(char words[][MAXLEN], char *infile) {

  FILE *in = fopen(infile, "r");
  char tempword[MAXLEN];
  int index = 0;

  // C function fgets does all the work here!
  while (fgets(words[index], MAXLEN, in) != NULL)
    index++;

  return index;
}

// Uses an insertion sort to sort the data in the array words. length
// is the number of titles stored in words.
void sort(char words[][MAXLEN], int length) {

  int i, j;
  char temp[MAXLEN];

  // Loop through each element, inserting it into its proper location.
  for (i=1; i<length; i++) {

    j = i;

    // Continue swapping elements as long as the current element is not
    // in the right location. Note the use of strcpy.
    while (j>0 && strcmp(words[j], words[j-1]) < 0) {
        strcpy(temp, words[j]);
        strcpy(words[j], words[j-1]);
        strcpy(words[j-1], temp);
        j--;
    }
  }  
}

// Prints out all the titles in words in the order they are stored.
// length is the number of titles stored.
void printwords(char words[][MAXLEN], int length) {
  int i;
  for (i=0; i<length; i++)
    printf("%s",words[i]);
}

// Determines the maximum length title in the list words.
int maxlength(char words[][MAXLEN], int length) {
  int i, max;

  max = strlen(words[0]);

  // Update the maximum length if a longer word is found.
  for (i=1; i<length; i++)
    if (strlen(words[i]) > max)
      max = strlen(words[i]);

  return max;
}
