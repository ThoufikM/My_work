//double pointer
#include<stdio.h>

int main()
{
    int a = 10;
    int *pt = &a;
    int **dpt = &pt;
    printf("PRINT THE &A:%d\n",&a);
    printf("PRINT THE PT:%d\n",pt);
    printf("PRINT THE DPT:%d,\n",dpt);
    printf("PRINT THE A:%d\n",a);
    printf("PRINT THE *PT:%d\n",*pt);
    printf("PRINT THE **DPT:%d\n",**dpt);
}

