#include<stdio.h>
int fac(int n);
int main(void)
{
	for (int  i = 1; i <= 5; i++)
	{
		printf("%d!=%d\n", i, fac(i));
	}
	return	0;
}

int fac(int n)
{
	static int f = 1;
	f *= n;
	return f;
}