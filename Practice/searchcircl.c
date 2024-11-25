//Find an element in a circularly sorted array

#include <stdio.h>

int main()
{
    int arr[] = {5,6,7,8,9,0,1,2,3,4};
    int x = 9;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < size;i++){
        if(arr[i] == x){
            printf("Element is at position %d",(i+1));
        }
    }
    return 0;
}