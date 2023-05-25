#include<stdio.h>

int main()
{
	struct value
	{
		int i;
		int r;	
	};
	printf("%ld",sizeof(struct value));
}