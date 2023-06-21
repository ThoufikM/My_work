// Ponter To Function
#include<stdio.h>
int sum(int a ,int b)
{
   
    return a*b;

}
int main()
{
    int add;
    int (*Fub)(int ,int);
    int x,y;

    printf("ENTER THE A VALUE:");
    scanf("%d",&x);

    printf("ENTER THE b VALUE:");
    scanf("%d",&y);

    Fub = sum;
    add = (*Fub)(x,y);

    printf("ADD A AND B:%d",add);
}