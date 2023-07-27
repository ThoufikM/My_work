#include<stdio.h>
int main()
{
    printf("FIND THE TIME:\n");
    int distance;
    int speed;
    printf("ENTER THE TIME TO REACH THE DISTINATION IN HOUR:");
    scanf("%d",&distance);
    printf("ENTER THE GOING SPEED:");
    scanf("%d",&speed);

    float tim = distance / speed;

    printf("DISTANCE TO REACH THE DISTINATION:%f hr",tim);

}