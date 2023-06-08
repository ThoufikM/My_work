#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *prt;

    prt = calloc(40,1);

    strcpy(prt,"NAME : THOUFIK\nAGE");

    free(prt);

    printf("%s",prt);
}
