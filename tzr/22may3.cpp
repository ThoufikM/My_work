#include<stdio.h>

int main()
{
	union value
	{
		int i ;
		char c ;
			
	};
	union value v;
	
	v.i = 10;
	v.c = 'b';
	
	printf("i = %d\n",v.i);
	printf("c = %c\n",v.c);
}
