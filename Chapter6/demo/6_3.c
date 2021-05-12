#include<stdio.h>
int main(void)
{
	int a[10] = {34, 67,90,43,124,87,65,99,132,26};
	int t;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}