#include<stdio.h>
int main()
{
    FILE *F2 = fopen("C NOTES.txt","w");
    
    if(F2 != NULL)
    {
        fputc('T',F2);
        fputc('H',F2);
        fputc('O',F2);
        fputc('U',F2);
        fputc('F',F2);
        fputc('I',F2);
        fputc('K',F2);

        fclose(F2);
    }
    FILE *F1 = fopen("C NOTES.txt","r");
    if(F1 != NULL)
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