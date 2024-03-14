// Accept number and check number is +ve, -ve, zero


#include<stdio.h>
int main()
{
  int num ;

  printf("Enter the Number : ");
  scanf("%d",&num);

  if (num > 0)
    {
	printf("Number is Positive\n");
    }
else if (num < 0)
    {
	printf("number is Negative\n");
	}
else
	{
	printf("Number is zero\n");
	}
	return 0;
	}
