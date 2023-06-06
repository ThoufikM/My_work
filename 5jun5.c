//pointer comparision
#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    int *pt1 = &a;
    int *pt2 =&b;

    printf("pt1:%d\n",pt1);
    printf("pt2:%d\n",pt2);

    if(pt1 > pt2)
        printf("pt1 is big");
    else
        printf("pt2 is big");
}