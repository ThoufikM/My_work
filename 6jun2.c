// struct program using if else
#include<stdio.h>
struct number
{
    int number1;
    int number2;
    float number3;
};

int  main()
{
    struct number N = {12,76,62};

    printf("NUMBER1:%d\n",N.number1);
    printf("NUMBER2:%d\n",N.number2);
    printf("NUMBER3:%f\n",N.number3);

    if(N.number1 > N.number2)
        printf("1 is big");
    else if(N.number2 > N.number3)
        printf("2 is big");
    else
        printf("3 is big");

    return 0;

}