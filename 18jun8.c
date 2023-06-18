// access string in pointer
#include<stdio.h>
int main()
{
    char s[10] = "THOUFIK";
    char *p;
    int i;
    p = s;

    for(i = 0;p[i] != '\0';i++)
        printf("%s\n",s+i);

    return 0;
}