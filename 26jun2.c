
#include<stdio.h>
int main()
{
    char T[20]= "HELLO THIS C PROGRAM";
    int i;
    
    for ( i = 0; T[i] !='\0'; i++)
    {
        if (T[i] == 'I' )
        {
            T[i] = 'A';
        }
        if (T[i] == 'S' )
        {
            T[i] = 'T';
        }
        
    }
    printf("CORRECT SENTANCE IS :%s",T);

    return 0;
    
}
/*OUTPUT : CORRECT SENTANCE IS :HELLO THAT C PROGRAM */