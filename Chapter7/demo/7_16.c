#include<stdio.h>
int f(int  a);

int main(void)
{
	int a = 2, i;
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", f(a));
	}
	return	0;
}

int f(int a)
{
	int b = 0;
	static c = 3;
	b = b + 1;
	c = c + 1;
	return(a + b + c);
}