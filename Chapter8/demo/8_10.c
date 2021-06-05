#include<stdio.h>
void sort(int* a, int n);
int main(void)
{
	int i, * p, a[10];
	p = a;
	printf("Please enter 10 numbers:");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", p++);
	}
	
	sort(a, 10);
	for (int  i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	

	return	0;
}

void sort(int* a, int n)//使用int* a和int a[]效果一样
{
	int temp;
	for (int i = 0; i < n-1; i++)
  	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}