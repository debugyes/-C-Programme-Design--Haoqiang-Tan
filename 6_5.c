#include<stdio.h>
int main(void)
{
	int i, j, row = 0, colum = 0, max;
	int a[3][4] = { {1,2,3,4}, {9,8,7,6}, {-10,10,-5,2} };
	max = a[0][0];
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				colum = j;
			}
		}
	}

	printf("%d, %d, %d", max, row, colum);
	return 0;
}
