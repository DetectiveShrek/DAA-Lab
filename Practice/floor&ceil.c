#include <stdio.h>

int main()
{
    int arr[]={2,4,6,8,10,12,14,16,18,20};
    int x=13;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; arr[i] <= x; i++){
    }
    int floor = arr[i];
    for(int j=(size-1);arr[j] >= x; j++){
    }
    int ceil=arr[j];
    printf("Floor = %d",floor);
    printf("Ceiling = %d",ceil);
    return 0;
}