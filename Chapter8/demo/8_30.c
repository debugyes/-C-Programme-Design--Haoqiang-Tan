#include<stdio.h>
#include<stdlib.h>

void check(int* p);
int main(void)
{
	int* p, i;
	p = (int*)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", p + i);
	}

	return	0;
}

void check(int* p)
{
	int i;
	printf("They are fail:");
	for (int i = 0; i < 5; i++)
	{
		if (p[i]<60)
		{
			printf("%d", p[i]);
		}
	}
}