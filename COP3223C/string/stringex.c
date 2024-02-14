// Arup Guha
// Examples of functions that use C strings for COP3223 Lecture 11/10/03.

#include <stdio.h>
#include <ctype.h>

void to_upper(char *word);
char* get_upper(char *word);
char* get_upper2(char *word);
char* get_upper3(char *word);
int palindrome(char *word);
int palindrome2(char *word);

int main() {

  char word[20];
  char *upperword;
  printf("Enter a word.\n");
  scanf("%s", word);

  // Note: These are not exhaustive tests. They only represent a single
  //       test of the palindrome2 function and the get_upper3 function.
  //       One should call each function multiple times for testing.
  //       In particular, one should ascertain the difference in execution
  //       of get_upper with get_upper2.

  // Test the palindrome2 function.
  if (palindrome2(word))
    printf("%s is a palindrome!\n", word);

  // Test the get_upper3 function.
  upperword = get_upper3(word);
  printf("The upper case version of %s is %s.\n", word, upperword);
  free(upperword);
  return 0;
}

// Changes the string pointed to by word to be uppercase.
void to_upper(char *word) {

  int index;
  while (word[index] != '\0') {
    word[index] = toupper(word[index]);
    index++;
  }
}

// Returns the uppercase version of the string pointed to by word.
char* get_upper(char *word) {

  int index = 0;

  // Declares new_string to be a normal character array.
  static char new_string[100];

  // Processes each character in word until the null character is hit.
  while (word[index] != '\0') {
    new_string[index] = toupper(word[index]);
    index++;
  }

  // Terminate new_string.
  new_string[index] = '\0';
  return new_string;
}

// Returns the uppercase version of the string pointed to by word.
char* get_upper2(char *word) {

  int index = 0;
  char* new_string;

  // Dynamically allocates the 100 characters.
  new_string =(char*)calloc(100, sizeof(char));

  while (word[index] != '\0') {
    new_string[index] = toupper(word[index]);
    index++;
  }
  new_string[index] = '\0';
  return new_string;
}

// Returns the uppercase version of the string pointed to by word.
char* get_upper3(char *word) {

  int index = 0;
  char* new_string;

  // Allocates only the necessary space.
  new_string =(char*)calloc(strlen(word)+1, sizeof(char));

  while (word[index] != '\0') {
    new_string[index] = toupper(word[index]);
    index++;
  }
  new_string[index] = '\0';
  return new_string;
}

// Returns 1 if word points to a palindrome, 0 otherwise. This function
// uses a case-sensitive check.
int palindrome(char *word) {

  int len, index;
  len = strlen(word);
  index = 0;

  while (word[index] == word[len-1-index] && index < len/2)
    index++;

  if (index == len/2)
    return 1;
  else
    return 0;
}

// Returns 1 if word points to a palindrome, 0 otherwise. This function
// uses a case-insensitive check.
int palindrome2(char *word) {
  int len, index;
  char *upperword;

  len = strlen(word);
  index = 0;
  
  upperword = get_upper3(word);

  while (upperword[index] == upperword[len-1-index] && index < len/2)
    index++;

  if (index == len/2)
    return 1;
  else
    return 0;

}
