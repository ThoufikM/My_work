//call by value program 

#include<stdio.h>

int call()
{
   int a =10;
    printf("PRINT THE A VALUE:%d\n",a);
}
int main()
{
    int a = 34;
    printf("PRINT THE A VALUE BEFORE USING FUNCTION :%d\n",a);
    call(a);
    printf("PRINT THE A VALUE AFTER USING FUNCTIONS:%d\n",a);
    return 0;

}