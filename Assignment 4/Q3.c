// four function calculator


#include <stdio.h>

float calculator(float a, float b, char operator)
{
    switch(operator)
	{
        case '+':
            return a + b;
            break;

        case '-':
            return a - b;
            break;

        case '*':
            return a * b;
            break;

        case '/':
            return a / b;
            break;

        default:
            printf("Invalid operator");
            return 0;
    }
}

int main()
{
    float operand1, operand2;
    char operator;

    printf("Enter two operands: ");
    scanf("%f %f", &operand1, &operand2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    float result = calculator(operand1, operand2, operator);
    printf("Result: %.2f", result);
    
	printf("\n");
    return 0;
}

