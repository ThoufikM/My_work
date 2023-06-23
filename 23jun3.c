#include<stdio.h>
int sum(int a,int b)
{
    static int count = 0;
    count++;
    int c  = a + b;

    printf("ADDITON OF %d AND %d ADDITION NUMBER%d :%d\n ",a,b,count,c);
    printf("HOW MANY TIMES CALLED FUNTION:%d\n",count);
    return a,b,count;

}


int main()
{
    sum(1,6);
    sum(12,35);
    sum(345,678);
}
     /*THE OUTPUT IS:
ADDITON OF 1 AND 6 ADDITION NUMBER1 :7
 HOW MANY TIMES CALLED FUNTION:1
ADDITON OF 12 AND 35 ADDITION NUMBER2 :47
 HOW MANY TIMES CALLED FUNTION:2
ADDITON OF 345 AND 678 ADDITION NUMBER3 :1023
 HOW MANY TIMES CALLED FUNTION:3*/