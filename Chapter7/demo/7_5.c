#include<stdio.h>
int max4(int a, int b, int c, int d);
int max2(int a, int b);
int main(void)
{
	int a, b, c, d;
	printf("please enter the value of a b c d:");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	printf("max=%d", max4(a, b, c, d));

	return	0;
}

int max4(int a, int b, int c, int d)
{
	int max;
	max = max2(a, b);
	max = max2(max, c);
	max = max2(max, d);

	return	max;
}

int max2(int a, int b)
{
	return (a > b ? a : b);
}