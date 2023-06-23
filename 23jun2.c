#include<stdio.h>
#include<string.h>
int main()
{
    char string[10] = "THOUFIK";
    char *pointer;
    int i;

    pointer = string;

    for(i = 0 ;i < 7; i++)
    {
        printf("* BRAKECT:%d\n",*(pointer+i));
        printf("NON * BRAKECT:%d\n",pointer+i);
        
        
    }
}
/*THE OUTPUT IS:
* BRAKECT:84
NON * BRAKECT:6422286
* BRAKECT:72
NON * BRAKECT:6422287
* BRAKECT:79
NON * BRAKECT:6422288
* BRAKECT:85
NON * BRAKECT:6422289
* BRAKECT:70
NON * BRAKECT:6422290
* BRAKECT:73
NON * BRAKECT:6422291
* BRAKECT:75
NON * BRAKECT:6422292*/