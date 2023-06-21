#include<stdio.h>
int main()
{
    int str = 10;
    int *ptr = &str;
    int **dptr = &ptr;


    printf("VALUE OF STR:%d\n",str);
    printf("ADREES OF STR:%p\n",&str);
    printf("VLAUE OF PTR:%p\n",ptr);
    printf("ADDRESS of ptr:%p\n",&ptr);
    printf("POINTED BY PTR :%d\n",*ptr);
    printf("VALUE OF DPTR:%d\n", **dptr);
    printf("VALUE OF DPTR:%p\n", *dptr);
    printf("ADDRESS OF DPTR:%p\n", &dptr);
    printf("VALUE OF DPTR:%p",dptr);


}