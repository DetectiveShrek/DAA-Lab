//Find pairs with difference K

#include <stdio.h>

int main()
{
    int arr[]={1,3,5,6,7,9,4,2};
    int k = 2;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size;i++){
        for(int j = 0;j < size;j++){
            if((arr[i] - arr[j]) == k){
                printf("%d, %d",arr[i],arr[j]);
                printf("\n");
            }
        }
    }
    return 0;
}