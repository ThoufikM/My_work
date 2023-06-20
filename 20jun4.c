#include<stdio.h>
int main()
{
    FILE *F2 = fopen("C NOTES.txt","w");
    
    if(F2)
    {
        fputs("THOUFIK\n",F2);
        fputs("FIRTHICK\n",F2);
        fputs("ASHIK\n",F2);
        fputs("THARIK\n",F2);
        fputs("GAFOOR\n",F2);
        fputs("SAFIK\n",F2);
        fputs("HATHIL\n",F2);

        fclose(F2);

    }
    FILE *F3 = fopen("C NOTES.txt","r");
    if(F3 != NULL)
    {
        char letter = fgetc(F3);
        while(letter != EOF)
        {
            printf("%c",letter);
            letter = fgetc(F3);
        }
        fclose(F3);
    }
    return 0;
}