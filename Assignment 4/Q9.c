//prime numbers

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime

bool isPrime(int num)
{
    if(num <= 1)
	{
        return false;
    }
    for(int i=2; i*i <= num; i++)
	{
        if(num % i == 0)
		{
            return false;
        }
    }
    return true;
}

// Function to print prime numbers in a given range

void printPrimesInRange(int start, int end)
{
    for(int i=start; i<=end; i++)
	{
        if(isPrime(i))
		{
            printf("%d ", i);
        }
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isPrime(num))
	{
        printf("%d is a prime number.\n", num);
    }
	else 
	{
        printf("%d is not a prime number.\n", num);
    }
    
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers in the range %d to %d are: ", start, end);
    printPrimesInRange(start, end);
    
	printf("\n");

    return 0;
}

