#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *emp;
    emp = malloc(10);
    realloc(emp,100);
    strcpy(emp,"HI I AM THOUFIK AND I GOTO WORK");
    printf("%s",emp);
}