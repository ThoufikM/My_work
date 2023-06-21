// Pointer To Function Using typedef Method 
#include<stdio.h>
typedef int (*FP)(int,int);
int sum(int a ,int b)
{
   
    return a*b;

}
int main()
{
    int add;
    int x,y;
    FP Fub;

    printf("ENTER THE A VALUE:");
    scanf("%d",&x);
    printf("ENTER THE b VALUE:");
    scanf("%d",&y);

    Fub = sum;
    add = (*Fub)(x,y);

    printf("ADD A AND B:%d",add);
}