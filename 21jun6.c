#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10][10] = {"APPLE","CAR","BANANA","FLIGHT","DOG"};
    char temp[10];

    for(int i =0;i < 5;i++)
    {
        for(int j = i + 1 ;j < 5;j++)
        {   
            for(int j = i + 1 ;j < 5;j++)
           {
                int k = 0;
                while(arr[i][k] == arr[j][k])
                    k++;
                if(arr[i][k] > arr[j][k])
                {
                for(int l = 0;l < 10;l++)
                    temp[l] = arr[i][l];
                for(int l = 0;l < 10;l++)
                    arr[i][l] = arr[j][l];
                for(int l = 0;l < 10;l++)
                    arr[j][l] = temp[l];
                }
           }
        }
    }
    printf("SORTING ARRAY:\n");
    for(int i = 0;i < 5; i++)
        printf("arr[%d] = %s\n",i,arr[i]);

    return 0;
}
