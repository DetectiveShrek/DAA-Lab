//Create an array 'al' with 'n' elements. Insert an element in ith position of 'al' and also delete an element from jth position of 'al'
#include <stdio.h>

int main()
{
    int al[10] = {6,89,9,21};
    int i = 1;
    int j = 3;
    int size = sizeof(al)/sizeof(al[0]);
    for(int k = size - 1;k >= i;k--){
        al[k] = al[k-1]; 
    }
    al[i] = 56;
    printf("Element with inserted value: ");
    for(int a = 0;a < size;a++){
        printf("%d ",al[a]);
    }
    al[j] = 0;
    for(int b = j;b < size - 1;b++){
        al[b] = al[b+1];
    }
    printf("\nElement with deleted value: ");
    for(int c = 0;c < size;c++){
        printf("%d ",al[c]);
    }
    return 0;
}