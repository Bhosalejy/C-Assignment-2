// To accept a 2-D array from the user

#include<stdio.h>

void acceptArray(int arr[10][10],int rows, int cols)
{
 printf("Enter elements of array: \n");
 for (int i = 0; i < rows; i++)
 for (int j = 0; j < cols; j++)
 scanf("%d",&arr[i][j]);
}

void printArray(int arr[10][10],int rows, int cols)
{
 printf("The array is:\n");
 for (int i = 0; i < rows; i++)
 for (int j = 0; j < cols; j++)
 printf("%d",arr[i][j]);
}

int main()
{
  int rows, cols;
  int arr[10][10];

printf("Enter number of rows and columns of array:\n");
scanf("%d %d",&rows,&cols);

acceptArray(arr, rows, cols);
printArray(arr, rows, cols);
printf("n");
return 0;
}

