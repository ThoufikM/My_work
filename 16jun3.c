// letters count
#include<stdio.h>
int main()
{
    char n[10] = "THOUFIK";
    int w_count = 0;
    for (int i = 0;n[i]!='\0';i++)
        w_count +=1;
    printf("LETTERS COUNT:%d",w_count);
}