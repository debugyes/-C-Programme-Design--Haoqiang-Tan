#include<stdio.h>
int a = 3, b = 5;
int max(int a, int b);

int main(void)
{
	int a = 8;
	printf("max = %d\n", max(a, b));//局部变量a覆盖全局变量a，传入max的值是8
	return	0;
}

int max(int a, int b)
{
	int c;
	c = a > b ? a : b;
	return	c;
}