#include <stdio.h>

int sumArr(int arr[],int i)
{
    if(i < 0){
        return 0;
    }
    return arr[i] + sumArr(arr,i-1);
}

int main()
{
    int arr[] = {2,6,19,40};
    int i = sizeof(arr)/sizeof(arr[0]);
    int sum = sumArr(arr,i-1);
    printf("The sum of elements in array is %d",sum);

    return 0;
}