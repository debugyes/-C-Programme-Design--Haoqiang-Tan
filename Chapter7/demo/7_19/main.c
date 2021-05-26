#include<stdio.h>
int power(int A);
int A;
int main(void)
{
	int b = 3, d, m;
	printf("enter the number a and its power m:\n");
	scanf("%d%d", &A, &m);
	printf("%d*%d = %d\n", A, b, A * b);
	printf("%d**%d=%d\n", A, m, power(m));

	return	0;
}