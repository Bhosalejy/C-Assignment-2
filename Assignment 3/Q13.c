//To display n terms of Fibonacci series


#include<stdio.h>

int main(void)
{
int n;
int fibonacci (n) ;
int first = 0, second = 1, next;
   
   printf("Enter number :\n",n);
   scanf("%d",&n);
for (int i = 0; i <= n; i++)
     {
	 if(i<=1)
	   next = i;
	 
     else
	 
       next = first + second;
	   first = second;
	   second = next;
	   }
	 printf("%d\n",next);
 
 return 0;
 }

