//to accept a number and print its prime factors.


#include <stdio.h>

void primeFactors(int n)
{
    int i = 2;
    while (n > 1)
	{
        if (n % i == 0)
		{
            printf("%d ", i);
            n /= i;
        }
		else
		{
            i++;
        }
    }
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d = ", num);
    primeFactors(num);

   printf("\n");
return 0;
}
