//Calculate quotient and remainder of two numbers

#include <stdio.h>

int main()
{
    int a,b,r,q;
    printf("Enter number");
    scanf("%d",&a);
    printf("Enter number");
    scanf("%d",&b);
    q = a/b;
    r = a%b;
    printf("Quotient = %d; remainder = %d",q,r);

}