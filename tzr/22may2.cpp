#include<stdio.h>

int main()
{
	struct point
	{
		int x;
		int y ;	
	};
	
	struct twopoints
	{
		struct point p1;
		struct point p2;	
	};
	
	struct twopoints p;
	printf("point1\n");
	scanf("%d%d",&p.p1.x,&p.p1.y);
	printf("point2\n");
	scanf("%d%d",&p.p2.x,&p.p2.y);
	
	printf("%d:%d\n",p.p1.x,p.p1.y );
	printf("%d:%d\n",p.p2.x,p.p2.y );
	
	
	
	
	return 0;
	
}