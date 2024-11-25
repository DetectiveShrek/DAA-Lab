//Find the number of rotations in a circularly sorted array

#include <stdio.h>

int main()
{
    int arr[]={5,6,7,8,9,0,1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int candi = arr[0];
    int pos;
    for(int i = 1;i < size;i++){
        if(arr[i] < candi){
            candi = arr[i];
        }
    for(int j = 0;j < size;j++){
        if(arr[j] == candi){
            pos = j;
        }
    }
    }
    printf("Number of rotations = %d",pos);
    return 0;
}