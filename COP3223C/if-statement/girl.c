/*****
* Taylor Kourim
* COP3223      Feb 8, 2011
* Determine whether or not you should ask a girl out
* [Example of logical or]
*/

#include <stdio.h>

int main(void) {
    
    // Declare variables
    int smart, pretty;
    
    // Get input from user
    printf("Is she smart? (0 = yes, 1 = no) \n");
    scanf("%d", &smart);
    printf("Is she pretty? (0 = yes, 1 = no) \n");
    scanf("%d", &pretty);
    
    // Logical or: You should ask her out as long as one of the two criteria are true.
    if (smart == 0 || pretty == 0) 
       printf("You should ask her out! ;)\n");
    
    // If neither are true, you could do better
    else
       printf("Keep searching\n");
       
    return 0;
}
