// array and pointers printing adress
#include<stdio.h>

int main()
{
    int array[5] = {10,12,14,16,18};
    int i;
    for(i = 0;i < 5;i++)
        printf("array[%d]:%p\n",i,array+i);
    return 0;
}