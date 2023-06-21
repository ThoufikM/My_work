//Single Pointer
#include<stdio.h>
int main()
{
    int str = 10;
    int *ptr = &str;

    printf("VALUE OF STR:%d\n",str);
    printf("ADREES OF STR:%p\n",&str);
    printf("VLAUE OF PTR:%p\n",ptr);
    printf("ADDRESS of ptr:%p\n",&ptr);
    printf("POINTED BY PTR :%d",*ptr);


}