// void pointers
#include<stdio.h>

int main()
{
    int a = 10;
    char c = 't';

    void *ptr;

    ptr = &a;
    printf("PRINT THE INTEGER POINTER:%d\n",*(int*)ptr);
    
    ptr = &c;
    printf("PRINT THE CHARACTER POINTER:%c\n",*(char*)ptr);


}