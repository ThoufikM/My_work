// accesing array using pointers and printing address
#include<stdio.h>

int main()
{
    int array[5] = {10,12,14,16,18};
    int i;
    int *ptr;

    ptr = array;
    

    for(i = 0;i < 5;i++)
        printf("array[%d]:%p\n",i,ptr+i);
    
    return 0;
}