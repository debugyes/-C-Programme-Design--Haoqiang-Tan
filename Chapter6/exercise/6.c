#include<stdio.h>
int main(void)
{
	int a[10][10];
	for (int i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		if (i == 0)
		{
			continue;
		}
		a[i][i] = 1;
	}

	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return	0;
}