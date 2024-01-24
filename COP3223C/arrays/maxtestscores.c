// Arup Guha
// 10/3/08
// Code covered in COP 3223 on 10/2/08. This example reads in test data
// from a file, finds the highest score on the test, and then finds out
// how many people achieved that score.

// This is a second version of this problem that doesn't use an array.

#include <stdio.h>

int main() {
    
    FILE *fin;
    
    // We assume the test data is in this file.
    fin = fopen("testdata.txt", "r");
    
    int numTests;
    fscanf(fin, "%d", &numTests);
     
    int i, score, max, numMax = 1;    
    fscanf(fin, "%d", &max);
        
    // Read in the rest of the scores.
    for (i=1; i<numTests; i++) {
        
        fscanf(fin, "%d", &score);
        
        // If we find an equal score, we've seen one more maximum score!
        if (score == max)
            numMax++;
            
        // But if this score is higher, store it as the max, and reset our
        // number of maximums to 1.
        else if (score > max) {
            max = score;
            numMax = 1;
        }
    }
 
    // Print out the highest score.               
    printf("The maximum test score is %d.\n", max);
 
    // Print out how many people got the highest score. Do a singular and
    // plural case =)
    if (numMax > 1)
        printf("There were %d people who got the highest score.\n", numMax);
    else
        printf("There was 1 person who got the highest score.\n");
                
    fclose(fin);

    system("PAUSE");
    return 0;
}
