//To calculate the sum of elements in the given row

#include <stdio.h>

int sumOfRow(int array[3][3], int row)
{
    int sum = 0;
    for (int i = 0; i < 3; i++) 
	{
        sum += array[row][i];
    }
    return sum;
}

int sumOfColumn(int array[3][3], int col)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
	{
        sum += array[i][col];
    }
    return sum;
}

int main()
{
    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum = sumOfRow(array, 1); 
    int colSum = sumOfColumn(array, 2);  

    printf("Sum of row 1: %d\n", rowSum);
    printf("Sum of column 2: %d\n", colSum);

    return 0;
}

