//tail recertion
#include<stdio.h>
void recer(int n)
{
	if (n == 5)
		return;
	printf("%d",n);
	recer(n + 1);
	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	recer(n);
	return 0;
	
}