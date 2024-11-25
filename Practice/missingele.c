#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,5,4,5,10,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < size;i++){
        if(arr[i] != i){
            printf("Smallest missing element = %d",arr[i]);
            break;
        }
    }
    return 0;
}