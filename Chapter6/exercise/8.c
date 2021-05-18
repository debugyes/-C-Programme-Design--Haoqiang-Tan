#include<stdio.h>
int main(void)
{
	int i, j, k, target, flag = 0;

	int a[4][5] = { 1,2,3,4,5,2,4,6,8,10,3,6,9,12,15,4,8,12,16,20 };
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			target = a[i][j];
			if (target < a[i][j + 1])
			{
				target = a[i][j+1];
			}
		}
		for (k = 1; k < 4; k++)
		{
			
		}
	}

	return	0;
}