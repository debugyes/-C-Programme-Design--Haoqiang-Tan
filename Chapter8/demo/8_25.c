#include<stdio.h>
float* search(float(*p)[4], int n);
int main(void)
{
	float score[][4] = { 60, 70, 80,90,56, 89,67,88,34,78,90,66 };
	float* p;
	int c;

	printf("enter the number of student:");
	scanf("%d", &c);
	p = search(score, c);
	for (int i = 0; i < 4; i++)
	{
		printf("%f ", *p++);
	}

	return	0;
}

float* search(float(*p)[4], int n)
{
	return *(p + n);
}