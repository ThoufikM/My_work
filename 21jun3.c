//Passing Function Pointer To Function
#include<stdio.h>
typedef int(*F)(int,int);

int sum(int a,int b)
{
    return a + b;
}

int mul(int a, int b)
{ 
    return a * b;
}

int excecute(int X,int Y,F FP)
{
    int result = (*FP)(X,Y);
    return result;
}

int main()
{
    int a1,a2;
    printf("ENTER THE A VALUE:");
    scanf("%d",&a1);
    printf("ENTER THE b VALUE:");
    scanf("%d",&a2);

    printf("ADD TWO NUMBERS A AND B:%d\n",excecute(a1,a2,sum));
    printf("MULTIPLY TWO NUMBERS A AND B:%d\n",excecute(a1,a2,mul));

    return 0;
}