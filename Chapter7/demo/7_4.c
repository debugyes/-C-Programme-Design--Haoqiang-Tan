float add(float x, float y);
#include<stdio.h>
int main(void)
{
	float a, b;
	printf("please enter a and b:");
	scanf("%f,%f", &a, &b);
	printf("sum is %f\n", add(a, b));

	return	0;
}

float add(float x, float y)
{
	return	x + y;
}