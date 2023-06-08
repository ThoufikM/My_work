#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *prt;

    prt = calloc(40,1);

    strcpy(prt,"NAME : THOUFIK\nAGE : 20\nEMP NO : 172");

    printf("%s",prt);
}
