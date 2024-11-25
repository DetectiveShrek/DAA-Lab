//Find frequency of each number in an array containing duplicates

#include <stdio.h>

int main()
{
    int arr[]={1,2,2,3,3,3,4,4,4,4};
    int candi=arr[0];
    int ctr=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        if(arr[i] == candi){
            ctr++;
        } else {
            printf("Frequency of %d = %d",candi,ctr);
            printf("\n");
            ctr=1;
            candi=arr[i];
        }
    }
    return 0;
}