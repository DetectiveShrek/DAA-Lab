//Determine and Output Whether Number N is Even or Odd

#include <stdio.h>

int main()
{
    int n;
    printf("Enter N");
    scanf("%d",&n);
    if(n / 2 == 0){
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
    return 0;
}