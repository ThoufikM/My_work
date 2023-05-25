//nested recertion
#include<stdio.h>

int nes(int n)
{
	if (n > 100)
		return n - 1;
	return nes(nes(n + 2));
}
int main()
{
	int n,a;
	scanf("%d",&n);
	a = nes(n);
	printf("%d",a);
	return 0;
	
}