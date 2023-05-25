#include<stdio.h>
int ind()
{
	int n;
	if(n == 6)
		return;
	printf("ODD: %d",n);
	n++;
	ind1();
}
int ind1()
{
	int n;
	if(n==6)
		return;
	printf("EVEN: %d",n);
	n++;
	ind();
}
int main()
{
	ind();
	ind1();
	return 0;
}