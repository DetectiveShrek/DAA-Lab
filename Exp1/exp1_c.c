//find the largest of three numbers entered by the user

#include <stdio.h>

int main()
{
    int candi,n;
    printf("Enter number: ");
    scanf("%d",&candi);
    for(int i = 0;i < 2; i++){
        printf("\nEnter number: ");
        scanf("%d",&n);
        if(candi < n){
            candi = n;
        }
    }
    printf("\nLargest number is %d",candi);
    return 0;
}