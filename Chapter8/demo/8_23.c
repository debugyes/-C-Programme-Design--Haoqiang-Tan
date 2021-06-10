#include<stdio.h>
int max(int x, int y);
int min(int x, int y);

int main(void)
{
	int(*p)(int, int);
	int a, b, c, n;
	printf("please enter a and b:");
	scanf("%d%d", &a, &b);
	printf("please enter 1 or 2:");
	scanf("%d", &n);
	if (n == 1)
	{
		p = max;
	}
	else
	{
		p = min;
	}
	c = (*p)(a, b);
	printf("a = %d, b = %d\n", a, b);
	if (n == 1)
	{
		printf("max = %d\n", c);
	}
	else
	{
		printf("min = %d", c);
	}
	return	0;
}
int max(int x, int y)
{
	return	x > y ? x : y;
}

int min(int x, int y)
{
	return	x < y ? x : y;
}