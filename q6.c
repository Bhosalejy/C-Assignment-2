// Palindrome

#include<stdio.h>

int main()
{
int num;
int rev = 0;
int rem = 1;
int sum = 0;
  
    printf("Enter the number : ");
	scanf("%d",&num);
	int temp = num;

	while ( num != 0)
	   {  
		 rem = num % 10;
		 rev = rev * 10 + rem;
		 num = num / 10;
       }

	   printf("rev %d\n",rev);
	   if(temp == rev )
	   {
            printf("Palindrome\n");
	   }
	 else
	   {
            printf("Not Palindrome\n");

       }
	return 0;
	
	   }
	   
