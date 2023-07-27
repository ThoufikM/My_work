#include<stdio.h>
int main()
{
    int p,t,i;
    printf("ENTER THE AMOUNT:");
    scanf("%d",&p);
    printf("ENTER THE TIME OF LAON ");
    scanf("%d",&t);
    printf("ENTER THE INTEREST PRCENTAGE:");
    scanf("%d",&i);

    printf("CALCULATE THE SIMPLE INTEREST:P*T*I");
    int simple_intrest = p*t*i / 100;
    printf("SIMPLE INTREST:%d",simple_intrest);
}