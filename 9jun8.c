// string and pointers printing adress
#include<stdio.h>

int main()
{
    char str[5] = "THOU";
    int i;
    for(i = 0;str[i];i++)
        printf("&str[%d]:%p\n",i,str+i);
    return 0;
}