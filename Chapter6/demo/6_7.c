#include<stdio.h>
int main(void)
{
	char c[][5] = { {' ', ' ', '*'}, {' ', '*', ' ', '*'}, {'*',' ',' ',' ','*'}, {' ','*',' ','*'},{' ', ' ', '*'} };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}