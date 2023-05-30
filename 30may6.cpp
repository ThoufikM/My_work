#include<stdio.h>
 
 int main()
 {
	char s1[10],s2[10],s3[10];
	
	printf("ENTER YOUR FIRST STRING:");
	scanf("%s",s1);
	printf("ENTER YOUR SECOND STRING:");
	scanf("%s",s2);
	
	int i = 0;
	
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] )
	{
		i++;
	}
	
	if (s1[i] == '\0' && s2[i] == '\0')
		printf("THIS TWO STRING ARE EQUAL");
	else
		printf("THIS TWO STRING ARE NOT EQUAL");
	
	
	return 0;
	
 }