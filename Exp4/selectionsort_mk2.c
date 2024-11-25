#include <stdio.h>

int main() {
    // Input size of array
    printf("Enter array size: ");
    int n;
    scanf("%d", &n);

    // Declare array
    int arr[n];

    // Input array elements
    for (int k = 0; k < n; k++) {
        printf("Enter array value: ");
        scanf("%d", &arr[k]);
    }

    // Display the unsorted array
    printf("\nUnsorted array: ");
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    // Bubble sort algorithm
    int temp;
    for (int i = 0; i < n-1; i++) {        // Outer loop for passes
        for (int j = 0; j < n-i-1; j++) {  // Inner loop for comparing adjacent elements
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("\nSorted array: ");
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
