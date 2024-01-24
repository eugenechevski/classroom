// Arup Guha
// 2/26/09
// Program that calculates the mode of a set of values read in from a file.
// Shown in COP 3223 on 2/26/09.

#include <stdio.h>

#define SIZE 100
#define MAXVAL 999

int main() {

    // Will store the raw data (numbers) here.
    int numbers[SIZE];

    // Open the array.
    FILE *ifp;
    ifp = fopen("numbers.txt","r");
   
    // Read in all of the data into the array.
    int i, index;
    for (i=0; i<SIZE; i++)
        fscanf(ifp, "%d", &numbers[i]);    
    fclose(ifp);
    
    // Initialize our frequency array.
    int freq[MAXVAL+1];
    for (i=0; i<1000; i++)
        freq[i] = 0;
        
    // Update the frequency array by adding one to the appropriate index
    // for each number stored in numbers.
    for (index=0; index < SIZE; index++) {
        freq[ numbers[index] ]++;
    }
    
    // Currently, our most frequent value is 0.
    int numTimesSeen = freq[0];
    int value = 0;
    
    // If we find a more frequent value, update the value and how many times
    // it appeared.
    for (index=0; index<1000; index++)
        if (freq[index] > numTimesSeen) {
            numTimesSeen = freq[index];
            value = index;
        }
    printf("The most frequent value was %d. It appeared %d times\n", value, numTimesSeen);

    system("PAUSE");
    return 0;
}
