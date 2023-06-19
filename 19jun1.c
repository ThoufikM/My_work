#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10] = "ASHIK";
    char s2[10] = "THOUFIK";
    char s3[10] = "SAFIK";
    char s4[10] = "THARIK";
    char s5[10] = "NAVEETH";
    char temp[10];

    for(int i=0; i < 5;i++)
    {
        if(strcmp(s1,s2) > 0)
        {
            strcpy(temp,s1);
            strcpy(s1,s2);
            strcpy(s2,temp);
        }
        if(strcmp(s2,s3) > 0)
        {
            strcpy(temp,s2);
            strcpy(s2,s3);
            strcpy(s3,temp);
        }
        if(strcmp(s3,s4) > 0)
        {
            strcpy(temp,s3);
            strcpy(s3,s4);
            strcpy(s4,temp);
        }
        if(strcmp(s4,s5) > 0)
        {
            strcpy(temp,s4);
            strcpy(s4,s5);
            strcpy(s5,temp);
        }
        printf("ITERATIONS:%s\t%s\t%s\t%s\t%s\n",s1,s2,s3,s4,s5);
    }
}