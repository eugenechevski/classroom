#include <stdio.h>

int main() {

  int index, freq[26];
  char ch;
  FILE* fin;

  fin = fopen("input.txt", "r");
  for (index = 0; index<26; index++)
    freq[index] = 0;

  fscanf(fin, "%c", &ch);
  while (!feof(fin)) {
    if (isalpha(ch)) 
      freq[tolower(ch)-'a']++;
    fscanf(fin, "%c", &ch);
  }

  printf("Letter\tFrequency\n");
  for (index = 0; index<26; index++) {

    printf("%c\t%d\n",(char)('a'+index),
                       freq[index]);
  }

  fclose(fin);
  system("PAUSE");
  return 0;
}      
