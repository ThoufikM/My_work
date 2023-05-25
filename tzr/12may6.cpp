#include<stdio.h>
int works(int a,int b)
{
	int add = a + b;
	return add;
	
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int addition =works(x,y);
	printf("ADD TWO NUMBERS:%d",addition);

	
}