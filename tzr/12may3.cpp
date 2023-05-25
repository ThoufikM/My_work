#include<stdio.h>
int main()
{
	printf("ENTER YOUR VALUE:");
	int n,i,c = 0;
	scanf("%d",&n);
	for(i = 1;i<n+1;i++)
	{
		if (n % i == 0)
		{
			c = c+1;
		}
	}
	if (c == 2)
		printf("PRIME NUMBER");
	else
		printf("NOT PRIME");
	
	
}
		
		
