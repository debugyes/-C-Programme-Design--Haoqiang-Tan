#include<stdio.h>
void input(int* p, int n);
void function(int* p, int n);
void output(int* p, int n);
int main(void)
{
	//int a[10] = { 20, 30, 10, 50, 60, 100, 0, 80, 40, 110 };
	int a[10] = { 32, 24, 56, 78, 1, 98, 46, 44, 29, 6 };

	//input(a, 10);
	function(a, 10);
	output(a, 10);

	return	0;
}

void input(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", p++);
	}
}

void function(int* p, int n)
{
	int* q = p;
	int* max, * min, t;
	max = min = q++;
	for (int i = 1; i < n; i++, q++)
	{
		if (*q < *min)
		{
			min = q;
		}
	}
	t = *min;
	*min = *q;
	*q = t;

	for (int i = 1; i < n; i++, q++)
	{
		if (*q > *max)
		{
			max = q;
		}
	}
	t = *max;
	*max = q[9];
	q[9] = t;
}

void output(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *p++);
	}
}