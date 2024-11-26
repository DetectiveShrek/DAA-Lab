//Write a program to reverse an array
#include <stdio.h>

int main()
{
    int arr[5]={45,62,47,91,24};
    int revArr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < size;i++){
        revArr[i] = arr[size-1-i];
    }
    printf("Orignal array: ");
    for(int j = 0;j < size;j++){
        printf("%d ",arr[j]);
    }
    printf("\nReversed array: ");
    for(int k = 0;k < size;k++){
        printf("%d ",revArr[k]);
    }
    return 0;
}