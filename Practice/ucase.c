//Convert uppercase string to lowercase using for loop
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "DAA";
    int length = strlen(str);
    for(int i = 0;i < length;i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}