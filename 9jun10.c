// string and pointer printing address and values
#include<stdio.h>

int main()
{
    
    char *str [10];
    char a = 'T'; 
    char b = 'H';    
    char c = 'O';    
    char d = 'U';    
    char e = 'F';
    char f = 'I';
    char g = 'K';

    str[0] = &a;
    str[1] = &b;
    str[2] = &c;
    str[3] = &d;
    str[4] = &e;
    str[5] = &f;
    str[6] = &g;


    
    for(int i = 0; i < 7; i++)
        printf("&str[%d] : %d \t *str[%d] : %c\n",i,str + i,i,*str[i]);
    return 0;
}


