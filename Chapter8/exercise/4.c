#include<stdio.h>
#include<stdlib.h>

void move(int* p, int m, int n);
int main(void)
{
	int m, n;

	printf("how many numbers:");
	scanf("%d", &m);
	printf("how many numbers do you want to move?");
	scanf("%d", &n);

	int* p = (int*)malloc(sizeof(int) * m);
	move(p, m, n);


	return	0;
}

void move(int* p, int m, int n)
{
	int* q = p + m-1;

	for (int i = 0; i < n; i++)
	{

	}
}