#include<stdio.h>
int main()
{
 FILE *a;
 a = fopen("textfile.txt","w");
 fprintf(a,"HELLO I AM THOUFIK");
 fclose(a);
 
 char b[50];
 a = fopen("textfile.txt","r");
 while(fscanf(a,"%s",b)!=EOF)
 	printf("%s",b);
 return 0;
 
}