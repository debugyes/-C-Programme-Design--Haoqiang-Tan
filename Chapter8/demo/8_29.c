#include<stdio.h>
int main(void)
{
	int a[5] = { 1,3,5,7,9 };
	int* num[5] = { &a[0], &a[1], &a[2], &a[3], &a[4] };
	int** p;

	p = num;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", **p++);
	}


	return	0;
}