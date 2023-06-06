//POINTER ARITHMATIC
#include<stdio.h>

int main()
{
    int a = 10;

    int *ptr = &a;

    printf("PRINT THE POINTER:%d\n",ptr);

    printf("PRINT THE POINTER IN ARITHMATIC MINUS:%d\n",ptr--);
    printf("PRINT THE POINTER IN ARITHMATIC PLUS:%d\n",ptr++);
}