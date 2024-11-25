#include <stdio.h>

int main()
{
    int arr[5] = { 5,4,7,3,2 };
    int temp, size=sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ");
    for(int i = 0; i < size; i++){
        printf("%d ",arr [i]);
    }
    for(int i = 0; i < (size-1); i++){
        for(int j = 0; j < (size - i - 1); j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted:");
    for(int i = 0;i < size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

//Time complexity: O(n^2)