// Arup Guha
// Written in class on 10/31/06 - example problem from high school
// programming contest.

#include <stdio.h>

#define PI 3.1415926535898

int main() {
    
    FILE *ifp;

    // Open the input file.    
    ifp = fopen("jetski.in", "r");

    int numcases;
    int day;
    fscanf(ifp, "%d", &numcases);
    
    // Process each case.
    for (day=1; day<=numcases; day++) {
        int mph, time;
        double radius;
        double area;
 
        // Read in the data for this case.
        fscanf(ifp,"%d%d", &mph, &time);
        
        // This is how far skippy can go in miles.
        // We divide by 60 because the time was given in minutes and
        // we need to convert to hours.
        radius = mph*time/60.0;
        
        // Semi-circle area.
        area = .5*PI*radius*radius;
        
        // Print the answer.
        printf("Day %d: %.2lf\n", day, area);
    }
    
    // Close the file!
    fclose(ifp);
    system("PAUSE");
    return 0;
}
