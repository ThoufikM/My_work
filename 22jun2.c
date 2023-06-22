// Change Charecter in String
#include<stdio.h>
int main()
{
    char T[20]= "HELJO I AM THOUFIK";
    int i;
    char change_char = 'J';
    

    for ( i = 0; T[i] !='\0'; i++)
    {
        if (T[i] == change_char )
        {
            T[i] = 'L';
        }
        
    }
    printf("CORRECT SENTANCE IS :%s",T);

    return 0;
    
}
/*THE OUTPUT IS :CORRECT SENTANCE IS :HELLO I AM THOUFIK*/