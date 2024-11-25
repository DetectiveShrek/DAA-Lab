#include <stdio.h>

int main()
{
    int arr[5] = {6,9,2};
    int n = 0, size=sizeof(arr)/sizeof(arr[0]);
    printf("Current array: ");
    for(int i = 0; i < size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nInsert value: ");
    scanf("%d",&n);
    for (int i=0; i < size;i++){
        for(int j = 0; j < size; j++){
            if(n > arr[j]){
                for(int k = (size-1);k > j; k--){
                    arr[k+1] = arr[k];
                }
                arr[j]=n;
            }
        }
    }
    printf("\nSorted array: ");
    for(int k = 0;k < size;k++){
        printf("%d ",arr[k]);
    }
}