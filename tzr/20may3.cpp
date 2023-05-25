#include<stdio.h>

int main()
{
	FILE *fp;
	char srt[100];
	fp = fopen("tharik.txt","r");
	fgets(srt,20,fp);
	printf("%s",srt);
}