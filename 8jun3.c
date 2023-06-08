// use realloc function
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *fname;
    fname = malloc(1);

    realloc(fname,30);

    strcpy(fname,"HI I AM THOUFIK\nMY AGE IS 20");
    printf("%s",fname);
}