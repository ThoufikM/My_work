#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10][10] = {"APPLE","CAR","BANANA","FLIGHT","DOG","ANT"};
    char temp[10];

    for(int i =0;i < 5;i++)
    {
        for(int j = i + 1 ;j < 6;j++)
        {
            if(strcmp(arr[i],arr[j]) > 0)
            {
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[j]);
            strcpy(arr[j],temp);
            }
        }
    }
    printf("SORTING ARRAY:\n");
    for(int i = 0;i < 6; i++)
        printf("arr[%d] = %s\n",i,arr[i]);

    return 0;
}
