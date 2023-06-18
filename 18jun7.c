// access string in pointer
#include<stdio.h>
int main()
{
    char s[10] = "THOUFIK";
    char *p;
    int i;
    p = s;

    *(p+4) = 'k';
    printf("%s",s);

    return 0;
}