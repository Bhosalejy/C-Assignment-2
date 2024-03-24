//to calculate nth term of the Fibonacci series using recursion.

#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
	{
        return n;
    }
	else 
	{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacci(int numTerms)
{
    int i;
    for (i = 0; i < numTerms; i++)
	{
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms you want in the Fibonacci series: ");
    scanf("%d", &n);

    printf("First %d terms of Fibonacci series are: ", n);
    printFibonacci(n);

    return 0;
}
