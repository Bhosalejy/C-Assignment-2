//To print a given character for a given number of times.


#include <stdio.h>

void printCharacter(char ch, int numTimes) 
{
    for (int i = 0; i < numTimes; i++)
	{
        printf("%c", ch);
    }
}

int main()
{
    char character = '*';
    int numberOfTimes = 5;
    
    printCharacter(character, numberOfTimes);
   
   printf("\n");    
   
   return 0;
}

