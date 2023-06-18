// string pointer
#include<stdio.h>
int main()
{
    char str[10] = "THOUFIK";

    for(int i = 0;str[i] != '\0';i++)
        printf("%c\n",*(str + i));
    
    return 0;

}