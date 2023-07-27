#include<stdio.h>
int main()
{
    printf("FIND THE DISTANCE:\n");
    int tim;
    int speed;
    printf("ENTER THE TIME TO REACH THE DISTINATION IN HOUR:");
    scanf("%d",&tim);
    printf("ENTER THE GOING SPEED:");
    scanf("%d",&speed);

    float distance = speed*tim;

    printf("DISTANCE TO REACH THE DISTINATION:%fkm/hr",distance);

}