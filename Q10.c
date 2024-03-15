// To accept a character c and display category of the input character.

#include<stdio.h>

int main()
{
char c;

    printf("Enter a character: ");
	scanf("%c",&c);
    
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
     {
	     printf("ALPHABET\n");
     
	 if(c >= 65 && c <= 90)
	     {
		 printf("UPPERCASE\n");
         }
	else
	     {
		 printf("LOWERCASE\n");
         }
	}	 
    else if(c >= 48 && c <= 57)
	 
	     {
		  printf("DIGIT\n");
          }

	else if(c == 32)
	     {
		 printf("SPACE\n");
		 }
		
	else if(c == 9)
	     {
		 printf("TAB\n");
		 }

	else if(c == 13)
	     {
         printf("CARRIAGE RETURN\n");
		 }
	else if(c == 10)
	     {
         printf("NEW LINE\n");
		 }
	else
		 {
		 printf("OTHER\n");
		 }
		 
	return 0;
}
         
