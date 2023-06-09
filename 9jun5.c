// // accesing array using pointers and printing values
#include<stdio.h>

int main()
{
    int array[5] = {10,12,14,16,18};
    int i;
    int *ptr;

    ptr = array;

    *(ptr + 1) = 20;
    *(ptr + 2) = 30;
    *(ptr + 3) = 40;
    *(ptr + 4) = 50;

    

    for(i = 0;i < 5;i++)
        printf("array[%d]:%d\n",i,*(ptr+i));
    
    return 0;
}