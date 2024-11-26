//Store n numbers in an array. Conduct a linear search for a given number and report success or failiure in the form of suitable message
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {2,4,6,8,10};
    int target = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    bool flag;
    for(int i = 0;i < size;i++){
        if (arr[i]==target){
            flag = true;
        }
    }
    if(flag){
        printf("Target is in the array");
    } else { 
        printf("Target is not in the array");
    }
    return 0;
}