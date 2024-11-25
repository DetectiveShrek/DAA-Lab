//Find the peak element in the array

#include <stdio.h>

int main()
{
    int arr[]={1,3,4,5,2,8,6,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i < (size-1);i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            printf("%d is peak", arr[i]);
            printf("\n");
        }
    }
    return 0;
}