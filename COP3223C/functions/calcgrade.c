// Arup Guha
// 9/26/06
// Program shown in COP 3223

#include <stdio.h>

int Comp_Grade(char grade);
char readChar();

int main() {

    // Set up all of the variables.    
    int total_points=0, total_hours=0, c_hours;
    char ans = 'Y';
    char my_grade;
    
    // Loop while the user has more grades to enter. We assume they have
    // at least one.
    while (ans == 'Y' || ans == 'y') {
        
        // Get the grade and number of hours for the current class.
        printf("Enter your letter grade.\n");
        my_grade = readChar();
        printf("Enter the number of credit hours.\n");
        scanf("%d", &c_hours);
        
        // Update the number of total points and total hours.
        total_points += c_hours*Comp_Grade(my_grade);
        total_hours += c_hours;
        
        // See if there's another grade to get.
        printf("Do you have another grade to enter?\n");
        ans = readChar();
    }
    
    // Print out the GPA.
    printf("Your GPA is %.2lf\n", (double)total_points/total_hours);
    
    system("PAUSE");
    return 0;

}    

// Pre-condition: grade must be a 'A', 'B', 'C', 'D' or 'F'
// Post-condition: a corresponding integer from 0 to 4, based on the grade
//                 will be returned.
int Comp_Grade(char grade) {
    
    // Return the appropriate integer for each grade.
    if (grade == 'A')
       return 4;
    else if (grade == 'B')
       return 3;
    else if (grade == 'C')
       return 2;
    else if (grade == 'D')
       return 1;
 
    // For F and all invalid cases.
    return 0;
}

// Pre-condition: none
// Post-condition: returns the first character read from the stream that is
//                 not a space, tab or newline character.
char readChar() {

    char ans;

    scanf("%c", &ans);   
    
    // Read another character until you get a non-white space one.  
    while (ans == ' ' || ans == '\n' || ans == '\t')
        scanf("%c", &ans);
    return ans;
}
