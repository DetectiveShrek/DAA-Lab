//Iterative
/*#include <stdio.h>

int main()
{
    int arr[] = {2,4,6,8,10};
    int target = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    int flag = 1;
    for(int i = 0;i < size;i++){
        if (arr[i]==target){
            printf("Target is at position %d",i);
            flag = 0;
        }
    }
    if(flag == 1){
        printf("Target is not in the array");
    }
}*/

//Recursive
#include <stdio.h>
int findIndex(int arr[], int size, int target, int index)
{
    if(index >= size){
        return -1;
    }
    if(arr[index] == target){
        return index;
    }
    return findIndex(arr,size,target,index+1);
}

int main()
{
    int arr[] = {2,4,6,8,10};
    int target = 6;
    int size=sizeof(arr)/sizeof(arr[0]);
    int result = findIndex(arr,size,target,0);
    if(result == -1){
        printf("Target is not in the array");
    } else {
        printf("Target is at index %d",result);
    }
    return 0;
}