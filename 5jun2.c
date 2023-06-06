//call by referance
#include<stdio.h>

int ref(int *a)
{
    *a = 10;
    printf("PRINT THE *A VALUE:%d\n",*a);
}

int main()
{
    int a = 34;
    printf("PRINT THE A VALUE BEFORE FUNCTION USING:%d\n",a);
    ref(&a);
    printf("PRINT THE A VALUE AFTER FUNCTION USING:%d\n",a);
}