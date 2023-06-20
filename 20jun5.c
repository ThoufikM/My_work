#include<stdio.h>
int main()
{
    FILE *FR = fopen("C NOTES.txt","r");
    FILE *FW = fopen("C NOTES_COPY.txt","rw");
    char s[10];

    if(FR && FW)
    {
        while(fgets(s,10,FR)!= NULL)
        {
            fputs(s,FW);
        }
    }
    
    //FILE *F3 = fopen("C NOTES_COPY.txt","r");
    if(FW != NULL)
    {
        char letter = fgetc(FW);
        while(letter != EOF)
        {
            printf("%c",letter);
            letter = fgetc(FW);
        }
        fclose(FR);
        fclose(FW);
       // fclose(F3);
    }
    return 0;
}
    

