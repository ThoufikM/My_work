#include<stdio.h>
int main()
{
	int i,arr[10],odd,even,size;
	printf("SIZE:");
	scanf("%d",&size);
	for(i = 0;i < size;i++)
		scanf("%d",arr[i]);
	for(i = 0;i<size;i++)
		if(arr[i]%2==0)
			even+=1;
		else
			odd+=1;
	return 0;
	printf("odd count:%d\n",odd);	
	printf("even count:%d",even);		
}