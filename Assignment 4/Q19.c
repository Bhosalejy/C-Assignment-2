// to implement four function calculator.

#include <stdio.h>

int calculator(int num1, int num2, char op, int *result) 
{
    int error = 0;

    switch(op)
	{
        case '+':
            *result = num1 + num2;
            break;
        case '-':
            *result = num1 - num2;
            break;
        case '*':
            *result = num1 * num2;
            break;
        case '/':
            if(num2 == 0)
			{
                error = 1;
            }
			else
			{
                *result = num1 / num2;
            }
            break;
        default:
            error = 1;
    }

    return error;
}

int main() 
{
    int num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(calculator(num1, num2, op, &result) == 1)
	{
        printf("Error: Division by zero or invalid operator");
    } 
	else
	{
        printf("Result: %d", result);
    }
        printf("\n");

    return 0;
}
