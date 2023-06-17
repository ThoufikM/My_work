#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *emp;
    emp = malloc(100);
    strcpy(emp,"HI I AM THOUFIK");
    printf("%s",emp);
}