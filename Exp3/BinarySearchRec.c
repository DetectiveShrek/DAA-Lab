#include <stdio.h>

int binarySearch(int arr[],int low,int high,int target)
{
    if(low > high){
        return -1;
    }
    int mid = low + (high - low) / 2;
    if(arr[mid] == target){
        return mid;
    } else if (arr[mid] < target){ 
        return binarySearch(arr,mid+1,high,target);
    } else {
        return binarySearch(arr,low,mid-1,target);
    }

}

int main()
{
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr,0,size-1,target);
    if(result == -1){
        printf("Target does not exist in array");
    } else {
        printf("Target is at index %d",result);
    }
    return 0;
}