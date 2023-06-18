// array pointer
#include<stdio.h>
int main()
{
    char *sub[5] = {"tamil","english","maths","science","social"};

    for(int i = 0;i < 5; i++)
        printf("sub[%d] = %p\n",i,sub[i]);
    for(int i = 0;i < 5; i++)
        printf("sub[%d] = %s\n",i,sub[i]);
    
    return 0;
}