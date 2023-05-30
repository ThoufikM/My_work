#include<stdio.h>

int main()
{
	char Tho[10] , copy_Tho[10];
	printf("GIVEN STRING:");
	
	scanf("%s",Tho);
	
	int i;
	
	for(i = 0; Tho[i] != '\0'; i++)
	{
		copy_Tho[i] = Tho[i];	
	}
	copy_Tho[i]= '\0';
	
	printf("COPYING STRING:%s",copy_Tho);
	
	return 0;
}