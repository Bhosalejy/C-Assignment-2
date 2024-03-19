/*
To accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
*/

#include <stdio.h>

int main() 
{
int num, i = 1;
 
printf("Enter a number: ");
scanf("%d", &num);

while (i <= num / 2)
   {
    if (num % i == 0) 
	  {
        printf("%d * %d = %d\n", i, num/i, num);
	  }
	    i++;
   }

     printf("\n");
return 0;

}
