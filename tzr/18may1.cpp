#include<stdio.h>
int main()
{
	int i,arr[10],size;
	
	printf("SIZE:");
	scanf("%d",&size);
	for(i = 0;i < size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int odd = 0,even = 0;
	for(i = 0;i<size;i++)
	{
	
		if(arr[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("odd count:%d\n",odd);	
	printf("even count:%d",even);
	return 0;
			
}