#include<stdio.h>
int max(int a, int b);
int main(void)
{
	float a, b;
	printf("please enter the value of A and B:");
	scanf("%f%f", &a, &b);
	printf("max is %d", max(a, b));


	return	0;
}

int max(float a, float b)
{
	return (a > b) ? a : b;
}