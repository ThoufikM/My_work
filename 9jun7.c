// pointer to array
#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50,60};
    int (*prt) [6];
    prt = &arr;

    printf("PTR:%d\n",prt);
    printf("*PTR:%d\n",*prt);
    printf("**PTR:%d\n",**prt);
}