#include<stdio.h>

int main()
{
	char s1[10],s2[10];
	
	printf("ENTER YOUR FIRST STRING:");
	scanf("%s",s1);
	printf("ENTER YOUR SECOND STRING:");
	scanf("%s",s2);
	
	int i ,f;
	
	
	for(i = 0;s1[i] != '\0' || s2[i] != '\0'; i++ )
	{
		if(s1[i]!=s2[i])
		{
			f = 1;
			break;
		}
	}
	if(f == 1)
		printf("THIS TWO STRINGS ARE NOT EQUAL");
	else
		printf("THIS TWO STRING ARE EQUAL");

	return 0;	
	 
	
	
}