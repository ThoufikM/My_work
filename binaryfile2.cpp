#include<stdio.h>
int main()
{
    FILE *bin;
    bin = fopen("binary.bin","wb");
    if(bin == NULL)
    {
        printf("FILE NOT CREATED");
    }
    else
    {
        printf("FILE SUCCESSFULLY CREATED");
    }
}