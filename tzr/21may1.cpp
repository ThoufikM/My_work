#include<stdio.h>

	struct th
    {
    	char name[10];
    	int age;
		int weight;	
	};
	
	void tho(struct th);
	
	int main()
	{
		struct th t = {"THOUFIK",20,69};
		tho(t);
		return 0;
		
	}
	
	void tho( struct th t2)
	{
		printf("NAME :%s\n",t2.name);
		printf("AGE :%d\n",t2.age);
		printf("WEIGHT :%d\n",t2.weight);		
	}