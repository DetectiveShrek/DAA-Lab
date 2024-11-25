#include <stdio.h>

int sumNum(int n)
{
    if (n <= 0){
        return 0;
    } else {
        return n + sumNum(n-1);
    }
}

int main()
{
    int n = 5;
    int sum = sumNum(n);
    printf("The sum of n natural numbers is %d",sum);

    return 0;
}