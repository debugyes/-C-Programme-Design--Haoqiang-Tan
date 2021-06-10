#include<stdio.h>
int fun(int x, int y, int(*p)(int, int));
int max(int, int);
int min(int, int);
int add(int, int);

int main(void)
{
	int a = 34, b = -21, n;	
	printf("please choose 1,2or3:");
	scanf("%d", &n);
	if (n == 1)
		fun(a, b, max);
	else if (n == 2)
		fun(a, b, min);
	else if (n == 3)
		fun(a, b, add);
	return	0;
}

int fun(int a, int b, int(*p)(int, int))
{
	printf("%d\n", (*p)(a, b));
}
int max(int a, int b)
{
	return	a > b ? a : b;
}
int min(int a, int b)
{
	return a < b ? a : b;
}
int add(int a, int b)
{
	return a + b;
}