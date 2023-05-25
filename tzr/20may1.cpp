#include<stdio.h>
int main()
{
	FILE *thoufik;
	thoufik = fopen("tharik.txt","r");
	char c;
	c = getc(thoufik);
	printf("%c",c);
	return 0 ;
	
}