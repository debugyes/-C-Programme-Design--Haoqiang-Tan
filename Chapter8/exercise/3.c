#include<stdio.h>
void input(int* p, int n);
void function(int* p, int n);
void output(int* p, int n);
int main(void)
{
	int a[10] = { 20, 30, 10, 50, 60, 100, 0, 80, 40, 110 };

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
		if (*q > *max)
		{
			max = q;
		}
		if (*q < *min)
		{
			min = q;
		}
	}
	//printf("%d %d", *max, *min);
	t = *min;
	*min = *p;
	*p = t;
	
	t = *max;
	*max = *(p + n - 1);
	*(p + n - 1) = t;
}

void output(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *p++);
	}
}