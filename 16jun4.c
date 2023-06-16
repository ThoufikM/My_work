// count of words and vowels and consonants
#include<stdio.h>
int main()
{
    char n[50] = "I AM THOUFIK I AM WORK OFFICE";
    int w_count = 1;
    int v_count = 0;
    int c_count = 0;
    for (int i = 0;n[i]!='\0';i++)
        if (n[i] == 'A' || n[i]=='E' || n[i] == 'I' || n[i] == 'O' || n[i] == 'U')
            v_count +=1;
        else if(n[i]==' ')
            w_count +=1;
        else  
            c_count +=1;
    printf("VOWELS COUNT:%d\n",v_count);
    printf("CONSONANTS COUNT:%d\n",c_count);
    printf("WORDS COUNT:%d\n",w_count);

}
