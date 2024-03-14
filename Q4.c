/*
Find maximum of two numbers using
a. If – else
b. conditional operator.
*/

#include<stdio.h>

int main()
{   
   int n1 = 20 , n2 = 30;
        if (n1 > n2)
        {
            printf("N1 : %d is Greater\n ",n1);   
        }
       else  
       {
          printf("N2 : %d is Greater\n ",n2); 
       }
 

 //Conditional operator
  {    
    int  n1 = 20 , n2 = 30, max;

    max = ((n1 > n2)? n1 : n2);
 
            printf("max = %d\n", max);
   }
      return 0;
 }

