#include<stdio.h>
int main()
{
	FILE *fpt;
	fpt = fopen("tharik.txt","r");
	char str[100];
	while(fgets(str,5,fpt))
	{
		printf("%s",str);
	}
	
	return 0;
}