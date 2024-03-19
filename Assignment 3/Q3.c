/*
To accept a number and calculate:
1. sum of digits of integer
2. Reverse the number
3. Palindrome
4. Armstrong
*/

#include<stdio.h>

typedef enum operation {EXIT,SUM_DIGIT,REV,PALIN,ARM}opr;

int main()
{
int num;
opr choice;
printf("Enter the number :");
scanf("%d",&num);
  do 
  {
   printf("0.EXIT\n,1.SUM_DIGIT\n,2.REVERSE\n,3.PALINDROME\n,4.ARMSTRONG\n");
   printf("Enter your choice :");
   int temp = num, rem, sum = 0, rev = 1, arm = 0;
   switch(choice)
   {
       case EXIT :printf("exit----\n");
	              break;
	
	   case SUM_DIGIT : while(temp != 0)
	   {
	          rem = temp % 10;
			  sum = sum + rem;
			  temp = temp / 10;
	   }
   
        printf("Sum = %d\n",sum);
		 break;

	   case REV :
	             break;
	   
	   case PALIN : 
	             break;

	   case ARM :while(temp != 0)
	          {
                 rem = temp %10;
				 arm = arm+(arm*rem*rem);
				 temp /= 10;
			  }
			  if (arm == num)
			     printf("Armstrong : ==%d\n",num,arm);
			  else 
			     printf("Not Armstrong\n");
				 break;
                 
		default : printf("Invalid Choice\n");
		          break;
   }

  } while(choice != 0);

return 0;
}
