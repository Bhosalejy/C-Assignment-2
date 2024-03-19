//to accept array elements from the user

#include <stdio.h>

// Function to accept array elements from the user
void inputArray(int arr[], int n)
{
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }
}

// Function to print array elements

void printArray(int arr[], int n) 
{
    printf("Array elements are: ");
    for (int i = 0; i < n; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    inputArray(arr, size);
    printArray(arr, size);

    return 0;
}
