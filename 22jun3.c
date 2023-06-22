#include<stdio.h>
#include<string.h>
int main()
{
    char array[4]= {10,20,30,40};
    char *pointer;
    int i;

    pointer = array;

    for(i = 0 ;i < 4; i++)
    {
        printf("%d\n",*(pointer+i));
    }
}


