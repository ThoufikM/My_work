#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10][10] = {"APPLE","CAR","BANANA","FLIGHT","DOG"};
    char temp[10];

    for(int i =0 ; i < 5;i++)
    {
        if(strcmp(arr[0],arr[1]) > 0)
        {
            strcpy(temp,arr[0]);
            strcpy(arr[0],arr[1]);
            strcpy(arr[1],temp);
        }
        if(strcmp(arr[1],arr[2]) > 0)
        {
            strcpy(temp,arr[1]);
            strcpy(arr[1],arr[2]);
            strcpy(arr[2],temp);
        }
        if(strcmp(arr[2],arr[3]) > 0)
        {
            strcpy(temp,arr[2]);
            strcpy(arr[2],arr[3]);
            strcpy(arr[3],temp);
        }
        if(strcmp(arr[3],arr[4]) > 0)
        {
            strcpy(temp,arr[3]);
            strcpy(arr[3],arr[4]);
            strcpy(arr[4],temp);
        }
    
    }
    printf("SORTING ARRAY:\n");
    for(int i = 0;i < 5; i++)
        printf("arr[%d] = %s\n",i,arr[i]);

    return 0;
}
