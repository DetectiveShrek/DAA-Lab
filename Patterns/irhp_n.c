#include <stdio.h>

int main()
{
    int n;
    n = 10;
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            printf("%d ", j - i); //n - ( j - 1) for ascending order
        }
        printf("\n");
    }
    return 0;
}