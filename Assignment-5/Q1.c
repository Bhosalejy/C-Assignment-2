//to accept marks of five subjects, calculate its total and average.

#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    float average;

    printf("Enter marks of five subjects: \n");

    for(int i = 0; i < 5; i++)
	{
        printf("Enter mark for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = (float)total / 5;

    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);
    
    return 0;
}

