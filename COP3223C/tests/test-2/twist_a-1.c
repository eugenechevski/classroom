#include <stdio.h>
int main(void) {
  int i, start=3, days=31;
  int calender_entry;

  for (i=1; i<start;i++)
   printf("....");

  for (i=1; i<=days; i++) {
    calender_entry=start-1 +i;
    if(i%6==0)
    {
      printf(" %2d6",i);
    }
    else{
      printf("  %2d",i);
    }
    
    if ( calender_entry%7==0)
        printf("\n");
    }
}