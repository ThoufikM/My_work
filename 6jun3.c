//union program

#include<stdio.h>
union type
{
    int a ;
    float b;
    char c;
};

int main()
{
    union type T;
    T.a = 10;
    printf("A VALUE:%d\n",T.a);
    T.b = 12;
    printf("B VALUE:%f\n",T.b);
    T.c = 'T';
    printf("C VALUE:%c\n",T.c);
}
