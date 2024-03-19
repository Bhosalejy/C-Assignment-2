//Four function calculator.


#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    do
	{
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) 
		{
            case '1':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f", result);
                break;

            case '2':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f", result);
                break;

            case '3':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f", result);
                break;

            case '4':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2 == 0)
				{
                    printf("Error: Division by zero");
                }
				else
				{
                    result = num1 / num2;
                    printf("Result: %.2f", result);
                }
                break;

            case '5':
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
	 while(choice != '5');

    return 0;
}

