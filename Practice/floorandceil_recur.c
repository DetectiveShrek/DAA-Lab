//Find floor and ceiling of a X (recursive solution)

#include <stdio.h>

int floor(i,x,arr[]){
    if arr[i] <= x{
        i++;
        floor(i);
    }
    return i;
}

int ceil(j,x,arr[]){
    if arr[j] >= x{
        j--
        ceil(j);
    }
    return i;
}

int main()
{
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int j=(sizeof(arr)/sizeof(arr[0]))-1, i = 0, x = 13;
    floor(i,x,arr[]);
    ceil(j,x,arr[]);
    printf("%d, %d",i,j);
}