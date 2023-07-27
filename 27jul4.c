#include<stdio.h>
int main()
{
    printf("FIND THE TIME:\n");
    int distance;
    int tim;
    printf("ENTER THE DISTANCE TO REACH THE DISTINATION IN KM:");
    scanf("%d",&distance);
    printf("ENTER THE TIME TO REACH THE DISTINATION IN HOUR:");
    scanf("%d",&tim);

    float speed = distance / tim ;

    printf("DISTANCE TO REACH THE DISTINATION:%f km/hr",speed);

}