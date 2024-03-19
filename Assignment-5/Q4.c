// to calculate maximum of the array elements

#include <stdio.h>

// Function to calculate maximum of array elements without using pointers

int maxArray(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
	{
        if (arr[i] > max)
		{
            max = arr[i];
        }
    }
    return max;
}

// Function to calculate maximum of array elements using pointers

int maxArrayPointer(int *arr, int size) 
{
    int max = *arr;
    for (int i = 1; i < size; i++) 
	{
        if (*(arr + i) > max)
		{
            max = *(arr + i);
        }
    }
    return max;
}

int main()
{
    int arr[] = {5, 10, 3, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max1 = maxArray(arr, size);
    printf("Maximum element in array (without pointers): %d\n", max1);

    int max2 = maxArrayPointer(arr, size);
    printf("Maximum element in array (using pointers): %d\n", max2);

    return 0;
}

