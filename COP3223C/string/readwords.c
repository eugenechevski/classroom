// Arup Guha
// 3/23/2010
// Example that shows how to read in a dictionary.

/* File format: First line has a positive integer n, representing the number
                of words in the file. The following n lines contain one word
                each, all lowercase letters only.
*/

/*** This code was edited on 11/9/2011 in COP 3223 class to add a specialized sort of
     the words from the input file. They are now sorted by length, shortest to longest,
     with ties broke by sorting all words of the same length in reverse alphabetical
     order. We assume the words use only lowercase letters.
***/

#include <stdio.h>
#include <string.h>

int search(char list[][20], int length, char word[]) ;

int mystrcmp(char* word1, char* word2);
void bubblesort(char list[][20], int length);

int main() {

    char words[100][20];

    // Open the file.
    FILE* ifp;
    ifp = fopen("words.txt", "r");

    // Read in the number of words.
    int numwords;
    fscanf(ifp, "%d", &numwords);

    // Read in each word: It's very intuitive - just index the two D array
    // with one index, that tells you which word you are reading in.
    int i;
    for (i=0; i<numwords; i++)
        fscanf(ifp, "%s", words[i]);

    // Print out all the words, in order.
    printf("here is what you read:\n");
    for (i=0; i<numwords; i++)
        printf("%s\n", words[i]);

    // Get a word to test our search function.
    char test[20];
    printf("enter a word to search for.\n");
    scanf("%s", test);

    // Search for that word.
    if (search(words, numwords, test))
        printf("Found %s in the dictionary\n", test);
    else
        printf("did not find %s\n", test);

    // Now, sort and print the words.
    bubblesort(words, numwords);
    for (i=0; i<numwords; i++)
        printf("%s\n", words[i]);

    system("PAUSE");
    return 0;
}

// Returns 1 iff word is found inside of list. The
// number of strings stored in list is length.
int search(char list[][20], int length, char word[]) {

    int i;

    // Go through each word, if you find a match return 1.
    for (i=0; i<length; i++)
        if (strcmp(list[i], word) == 0)
            return 1;

    // If we get here, no match was found.
    return 0;
}

// Returns a negative integer if word1 comes before word2
// Returns 0 if they are equal, and a positive integer otherwise.
// Shorter words come before longer words. For words of equal length
// words that come later alphabetically come first.
int mystrcmp(char* word1, char* word2) {

    // First look at the lengths of each word.
    if (strlen(word1) != strlen(word2))
        return strlen(word1) - strlen(word2);

    // Break ties by REVERSE alpha order.
    return strcmp(word2, word1);
}

// Sorts the first length strings in list using a bubble sort
// according to the comparison functio mystrcmp.
void bubblesort(char list[][20], int length) {

    int i, j;

    // Placing the ith value in the correct spot.
    for (i=length-1; i>0; i--) {

        int exchange = 0;

        for (j=0; j<i; j++) {

            // These two are out of order, so swap them.
            if (mystrcmp(list[j], list[j+1]) > 0) {

                char temp[20];
                strcpy(temp, list[j]);
                strcpy(list[j], list[j+1]);
                strcpy(list[j+1], temp);
                exchange++;
            }

        }

        // If nothing was swapped, everything is in order, so return!
        if (exchange == 0)
            return;

    }
}
