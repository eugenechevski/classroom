#include <stdio.h>

int main(void) {
  int i, start=3, days=31;
  int calender_entry,week_counter=1;
  int sum=0;

  for (i=1; i<start;i++)
   printf("...");

  for (i=1; i<=days; i++){
      calender_entry = start-1 +i;
      //check if this is the third week 
      if(week_counter==3) 
      {
        sum=sum+i;
      } 
      
      printf(" %2d",i);
      
      if (calender_entry %7==0)
      {
            printf("\n");
            week_counter++;
      }
      
    }
    if (sum%7==0)
    {
        printf("\nSum %d is divisible by 7",sum);
    }
}


/*
result_of_something % 7 ={0,1,2,3,4,5,6}

1%7=1, this is sunday
2%7=2, this is Monday
3%7=3, this is Tuesday
4%7=4, this is Wednesday
5%7=5, this is Thursday
6%7=6, this is Friday
7%7=0, this is Saturday
8%7=1, this is sunday
9%7=2, this  is Monday
*/
