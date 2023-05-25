#include<stdio.h>
 
 int main()
 {
 	struct bitfield
	{
	int a : 1;
	int b : 2;
 	};
 	printf("%ld\n",sizeof(struct bitfield));
 }