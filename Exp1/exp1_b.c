//Find the roots of a quadratic equation

#include <stdio.h>

int main()
{
    int a,b,c,x1,x2;
    printf("Input a, b and c values of the equation (ax^2 + bx + c)");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x1 = ((-1*b) + ((b^2 - 4*a*c)*1/2))/(2*a);
    x2 = ((-1*b) - ((b^2 - 4*a*c)*1/2))/(2*a);
    printf("x = %d, %d",x1,x2); 
    return 0;
}