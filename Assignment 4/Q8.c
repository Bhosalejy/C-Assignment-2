//to return next term of Fibonacci series with each call to the function.

#include <stdio.h>

int nextFibonacci()
{
    static int first = 0, second = 1, next;

    if (first == 0 && second == 1)
	{
        next = 1;
    }
	else
	{
        next = first + second;
        first = second;
        second = next;
    }

    return next;
}

int main()
{
    for (int i = 0; i < 10; i++)
	{
        printf("%d ", nextFibonacci());
    }
        printf("\n");
    return 0;
}
