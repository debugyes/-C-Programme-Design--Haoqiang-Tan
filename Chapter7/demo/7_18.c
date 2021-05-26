#include<stdio.h>
int max();

int main(void)
{
	printf("请输入ABC的值：");
	extern int A, B, C;//使用extern声明扩大作用域
	//等价于extern A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	printf("max is %d\n", max());

	return	0;
}

int A, B, C;

int max()
{
	int m;
	m = A > B ? A : B;
	if (C > m)
	{
		m = C;
	}

	return	C;
}