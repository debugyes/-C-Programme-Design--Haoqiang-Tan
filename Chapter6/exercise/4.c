#include<stdio.h>
int main(void)
{
	int a[11] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, num;
	scanf("%d", &num);

	for (i = 10; i >= 0; i--)
	{
		if(num<a[i])
		{
			for (int j = 10; j >= i+1; j--)
			{
				a[j] = a[j - 1];
			}
		}
	}
	a[i + 1] = num;
	for (int i = 0; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
	return	0;
}