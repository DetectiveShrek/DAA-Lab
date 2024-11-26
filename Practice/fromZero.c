//Move all zeroes to end of an array
#include <stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    int nonZero = 0;
    int arr[] = {23,4,0,67,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < size;i++){
        if(arr[i] != 0){
            swap(&arr[i],&arr[nonZero]);
            nonZero++;
        }
    }
    printf("Altered array: ");
    for(int k = 0;k < size;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}