/*
To accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message
*/

#include<stdio.h>

int main()
{
int n1;
int n2;
int res;

  printf("Enter the Number : ");
  scanf("%d",&n1);

  printf("Enter the Number : ");
  scanf("%d",&n2);

  if (n2 != 0)
  {
  res = n1 / n2;
     printf("res = %d\n",res);
   }
  else
  {
     printf("Error Message\n");
  }
return 0;

}
