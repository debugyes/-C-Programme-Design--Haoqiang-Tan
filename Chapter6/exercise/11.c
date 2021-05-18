#include<stdio.h>
int main(void)
{
	char c[5] = { '*','*', '*', '*', '*' };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 5; k++)
		{
			printf("%c", c[i]);
		}
		printf("\n");
	}

	return	0;
}