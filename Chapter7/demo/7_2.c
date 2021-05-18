#include<stdio.h>
int max(int a, int b);
int main(void)
{
	int a, b;
	printf("please enter the value of A and B:");
	scanf("%d%d", &a, &b);
	printf("max is %d", max(a, b));


	return	0;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}