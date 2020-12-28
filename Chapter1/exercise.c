void e1_4(void);
void e1_5(void);
void e1_6(void);
#include<stdio.h>
int main(void)
{
	e1_6();
	return 0;
}

// 1_4编写一个程序，运行时输出Hello World!
void e1_4(void)
{
	printf("Hello World！");
}

void e1_5(void)
{
	//写法一
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 0; j < 2*(i-1); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 5; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	//写法二
	printf("*****\n");
	printf("  *****\n");
	printf("    *****\n");
	printf("      *****\n");
}

void e1_6(void)
{
	int a, b, c;

	printf("input:");
	scanf("%d%d%d", &a, &b, &c);
	//写法一
	if (a>b)	
	{
		if (a > c)
		{
			printf("%d是最大\n", a);
		}
		else
		{
			printf("%d是最大\n", c);
		}
	}
	else
	{
		if (b>c)
		{
			printf("%d是最大\n", b);
		}
		else
		{
			printf("%d是最大\n", c);
		}
	}

	
	//写法二
	printf("%d是最大\n", (a > b) ? (a > c) ? a : c : (b > c) ? b : c);

}