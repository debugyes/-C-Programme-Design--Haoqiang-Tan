#include<stdio.h>
int max(int x, int y);
int main(void)
{
	int a, b, c;
	int (*p)(int, int);
	p = max;
	printf("please enter a and b:");
	scanf("%d%d", &a, &b);
	//c = max(a, b);
	c = (*p)(a, b);
	printf("a = %d\nb = %d\nmax = %d\n", a, b, c);
	return	0;
}

int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return	z;
}