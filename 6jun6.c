// dagling pointer 
#include<stdio.h>
void fun()
{
    int v = 250;
}

int* get()
{
    int i = 100;

    return &i;

}

int  main()
{
    int *ptr = get();
    fun();
    printf("PRINT THE DAGLING POINTER:%d\n",ptr);
    printf("PRINT THE DAGLING POINTER:%d\n",*ptr);

    return 0;

}
