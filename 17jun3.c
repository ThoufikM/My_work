#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *emp;
    emp = calloc(5,1);
    strcpy(emp,"HI I AM THOUFIK");
    printf("%s",emp);

}