#include<stdio.h>
int main()
{
	struct thouf
	{
		char name[10];
		int mark;	
	};
	struct thouf student1={"thoufik",75};
	printf("%s",student1.name);
	printf("\n%d",student1.mark);
	
}

