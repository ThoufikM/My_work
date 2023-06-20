#include<stdio.h>
int main()
{
    FILE *fp = fopen("C NOTES.txt","r");
    char str[10];

    if(fp != NULL )
    {
        while(fgets(str,10,fp) != NULL)
        {
            printf("%s",str);
        }

        fclose(fp);
    }

    return 0;
}