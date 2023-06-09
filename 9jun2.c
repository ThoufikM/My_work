// array and pointers printing values
#include<stdio.h>

int main()
{
    int array[5] = {10,12,14,16,18};
    int i;
    for(i = 0;i < 5;i++)
        printf("array[%d]:%d\n",i,*(array+i));
    return 0;
}