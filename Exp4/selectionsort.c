#include <stdio.h>

int main()
{
    int arr[5] = { 5,4,7,3,2 };
    int temp, size=sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ")
    for(int k = 0; k < size; k++){
        printf("%d ",arr[k]);
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < (1 + i); j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nsorted: ");
    for(int k = 0; k < size; k++){
        printf("%d ",arr[k]);
    }
    return 0;
}

//Time complexity: O(n^2)