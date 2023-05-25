#include<stdio.h>

union value
{
	int i;
	char c;
	 
};
void fun(union value);

int main()
{
union value s;



s.i = 10;
s.c = 'a';

fun(s);
return 0;

}

void fun(union value t)
{
	printf("i = %d\n",t.i);
	printf("c = %c\n",t.c);
}