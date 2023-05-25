#include<stdio.h>
int main()
{
	
	int a[10][10],b[10][10],c[10][10],i,j,k;
	printf("first matrix:\n");
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3 ;j++)
		{
		 	scanf("%d",&a[i][j]);	
		}
	}
	printf("second matrix\n");
	for(i = 0; i < 3 ;i++)
	{
		for(j = 0;j < 3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiply matrix\n");
	for (i = 0; i<3; i++)
	{
		for(j = 0;j <3;j++)
		{
			c[i][j] = 0;
			for(k = 0;k<3;k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	
	}
	printf("printing\n");
	for(i =0;i<3;i++)
	{
		for(j =0 ;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}