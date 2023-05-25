//head recertion
#include<stdio.h>
void recer(int n)
{
	if (n == 5)
		return;
	recer(n + 1);
	printf("%d",n);
	
}
int main()
{
	int n;
	scanf("%d",&n);
	recer(n);
	return 0;
	
}