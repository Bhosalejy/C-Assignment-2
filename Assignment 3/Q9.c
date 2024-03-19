/*
To accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm.
*/


#include <stdio.h>

int findGCD(int num1, int num2)
{
    while (num1 != num2)
	{
        if (num1 > num2)
		{
            num1 -= num2;
        }
		else
		{
            num2 -= num1;
        }
    }
    return num1;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    int gcd = findGCD(num1, num2);

    printf("The GCD of %d and %d is %d", num1, num2, gcd);
  
    printf("\n");

    return 0;
}

