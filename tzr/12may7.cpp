#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	printf("ENTER THE 5 VALUES:");
	for(i = 0;i < 5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0;i < 5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
