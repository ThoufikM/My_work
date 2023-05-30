#include<stdio.h>
int main()
{
	char str1[10],str2[10],str_concat[10];
	
	printf("ENTER YOUR FIRST STRING:\n");
	scanf("%s",str1);
	
	printf("ENETR YOUR SECOND STRING:\n");
	scanf("%s",str2);
	
	int i,length = 0;
	
	for(i =0;str1[i] != '\0'; i++)
	{
		str_concat[length++] = str1[i]; 
	}	
	
	for(i = 0; str2[i] != '\0'; i++)
	{
		str_concat[length++] = str2[i];
	}

	str_concat[length]='\0';

	
	printf("CONCAT THE TWO STRING:%s",str_concat);
}