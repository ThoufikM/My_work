#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,r=1;
	printf("ENTER THE VALUE:");
	scanf("%d",&n);
	for(i=2;i<sqrt(n);i++)
	{
		if (n % i == 0)
		{
			if (n/i==i)
				r = r +1;
			else
				r = r + i + n / i;
		}
	}
	if (n == r)
		printf("THIS PERFACT NUMBER");
	else
		printf("NOT PERFACT NUMBER");
	return 0;
}