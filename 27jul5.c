#include<stdio.h>
int main()
{
    printf("FIND THE CHASING PROBLEMS IN DISTANCE SPEED AND TIME:\n");
    int thief_place;
    int thief_speed;
    int police_speed;
    printf("THIEF WATHCING THE POLICE IN AHEAD IN:");
    scanf("%d",&thief_place);
    printf("THIEF SPEED:");
    scanf("%d",&thief_speed);
    printf("POLICE SPEED:");
    scanf("%d",&police_speed);
    int speed_diffrent = police_speed - thief_speed; 

    int THIEF_RUNNING_DITSTANCE_BEFORE_CATCH  = thief_place * thief_speed / speed_diffrent; 

    printf("THIEF RUNNING DITSTANCE BEFORE CATCH:%d",THIEF_RUNNING_DITSTANCE_BEFORE_CATCH);


    
}