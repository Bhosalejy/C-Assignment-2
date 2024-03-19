//To accept a character and a number, and print the character number times

#include<stdio.h>

int main()
{
char ch;
int num;

  printf("Enter the character:");
  scanf("%c",&ch);

  printf("Enter the Number:");
  scanf("%d",&num);


 int i = 0;
 while(i <= num)
 {
      printf("%c",ch);
	  i++;
 }	  
 printf("\n");
return 0;
}
