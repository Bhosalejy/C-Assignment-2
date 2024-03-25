//To remove duplicate elements from the array

#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[n - 1];

    return j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int len = removeDuplicates(arr, n);

    printf("\nArray with duplicates removed: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNumber of unique elements: %d", len);

    return 0;
}
```
Output:
```
Original array: 1 2 2 3 4 4 5
Array with duplicates removed: 1 2 3 4 5
Number of unique elements: 5
```
