//Find number of 1's in a Binary Array

#include <stdio.h>

int main()
{
    int binarr[]={1,1,0,1,0,0,1,0,1,1};
    int ctr=0;
    int size=sizeof(binarr)/sizeof(binarr[0]);
    for(int i = 0; i < size; i++){
        if(binarr[i] == 1){
            ctr++;
        }
    }
    printf("Number of 1's: %d",ctr);
    return 0;
}