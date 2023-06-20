#include<stdio.h>
int main()
{
    FILE *F1 = fopen("C NOTES.txt","r");

    if(F1 !=NULL)
    {
        char letter = fgetc(F1);
        while(letter != EOF)
        {
            printf("%c",letter);
            letter = fgetc(F1);
        }
        fclose(F1);
    }
    return 0;
}