/*
To display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/

#include<stdio.h>

int main()
{
    int year;
	printf("Enter the year : ");
	scanf("%d",&year);

	if( year % 400 == 0)
	       printf("Leap Year \n");
 
    else if( year % 100 == 0)
	       printf("Not Leap Year \n");
 
    else if( year % 4 == 0)
	       printf("Leap Year \n");

    else 
	       printf("Not Leap Year \n");

if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) 	    printf("Leap Year \n");

   else
        printf("Not Leap");
   
 (year % 4 == 0 && year % 100 != 0)?printf("Leap1\n") : (year % 400 ==0)?printf("Leap2\n") :printf("Non-Leap\n");
    
return 0;
}
