//Returning Function Pointer To Function
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

F get(int c)
{
    if(c == 0)
    {
        return sum;
    }
    else
    {
        return mul;
    }
}

int main()
{
    F fb;
    
    int a1,a2;
    printf("ENTER THE A VALUE:");
    scanf("%d",&a1);
    printf("ENTER THE b VALUE:");
    scanf("%d",&a2);
    
    
    fb = get(0);
    printf("ADD TWO NUMBERS A AND B:%d\n",(*fb)(a1,a2));
    fb = get(1);
    printf("MULTIPLY TWO NUMBERS A AND B:%d\n",(*fb)(a1,a2));

    return 0;
}