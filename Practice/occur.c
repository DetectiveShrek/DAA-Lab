//Find first and last occurence of a given number in a sorted array

#include <stdio.h>

int main()
{
    int arr[] = {1,1,1,1,2,2,2,3,3,4};
    int x=2;
    int size=sizeof(arr)/sizeof(arr[0]);
    int frst;
    int lst;
    for(int i = 0;i < size; i++){
        if(arr[i] == x && arr[i-1] != x){
            frst = i+1;
        }
        if(arr[i] == x && arr[i+1] != x){
            lst = i+1;
        }
    }
    if(frst == lst){
        printf("Element only occurs once");
    } else {
        printf("First occurence = %d",frst);
        printf("\nLast occurence = %d",lst);
        return 0;
    }
}