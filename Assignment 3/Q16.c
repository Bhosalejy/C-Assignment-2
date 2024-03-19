



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator
    int magicNumber = rand() % 1000 + 1; // Generate a random magic number between 1 and 1000
    int guess;
    int tries = 0;

    printf("Welcome to the Guess the Magic Number game!\n");
    printf("You have 10 chances to guess the magic number.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        tries++;

        if (guess == magicNumber) 
		{
            printf("Congrats! You won.\n");
            break;
        }
		else if (guess < magicNumber)
		{
            printf("** left **\n");
        }
		else
		{
            printf("** right **\n");
        }

        if (tries == 10) 
		{
            printf("Sorry, you have run out of chances. The magic number was: %d", magicNumber);
            break;
        }
    }
	while (tries < 10);

    return 0;
}
