// Arup Guha
// 2/25/2010
// Example of Reading information from a file that uses an array

#include <stdio.h>

#define NUMYEARS 16
#define STARTYEAR 1995

int main() {

    FILE* ifp;

    // Text file obtained from http://www.engr.udayton.edu/weather/citylistUS.htm    
    ifp = fopen("HIHONOLU.txt","r");
    
    int i, month, day, year;
    double temp;    
    
    // We've got 16 years of data to store.
    double sumtemp[NUMYEARS];
    int numtemps[NUMYEARS];
    
    // Set everything to 0.
    for (i=0; i<NUMYEARS; i++) {
        sumtemp[i] = 0;
        numtemps[i] = 0;
    }
    
    // Read in the month for this entry.
    fscanf(ifp, "%d", &month);
    
    // We added a -1 sentinel value while testing to the end of the file
    // If you run this program, make sure to do that on your own.
    while (month != -1) {
          
        // Read in the rest of the data for that day.
        fscanf(ifp, "%d%d%lf", &day, &year, &temp);
        
        // The arrays starts at 0, so see how we offset for that.
        sumtemp[year-STARTYEAR] = sumtemp[year-STARTYEAR] + temp;
        numtemps[year-STARTYEAR]++;   
        
        // Read in the month for the next entry. 
        fscanf(ifp, "%d", &month);
    }
    
    // Print out the average temperature for each day by accessing both the
    // sum and number of days that a temperature was accessed that year.
    for (i=0; i<NUMYEARS; i++)
        printf("%d\t%d\t%.2lf\n", i+STARTYEAR, numtemps[i],
                                  sumtemp[i]/numtemps[i]);
    
    fclose(ifp);
    system("PAUSE");
    return 0;
}
