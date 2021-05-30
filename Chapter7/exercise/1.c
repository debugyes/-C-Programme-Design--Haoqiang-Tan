#include<stdio.h>
void gcd1(void);
void gcd2(void);
int main(void)
{
	gcd1();
	gcd2();
	return	0;
}

/*
最小公倍数=两整数的乘积÷最大公约数
*/

/*
最大公约数1：辗转相除法
1. a%b得余数c
2. 如果c = 0,则b为最大公约数
3. 如果c不等于0,则a = b,b = c继续执行步骤1。
*/
void gcd1(void)
{
	int a, b, m, n, c;

	printf("Please enter a, b");
	scanf("%d%d", &a, &b);
	m = a;
	n = b;
	c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}

	printf("最大公约数：%d\n", b);
	printf("最小公倍数：%d\n", m * n / b);
}


/*
相减法
1. 如果a>b,则a=a-b
2. 如果a<b,则b=b-a
3. 如果a=b,则a或b为两数的最大公约数
4. 若a≠b,则再回去执行
*/
void gcd2(void)
{
	int a, b, m, n, c;

	printf("Please enter a, b");
	scanf("%d%d", &a, &b);
	m = a;
	n = b;
	while (a != b)
	{
		if (a>b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	printf("最大公约数：%d\n", b);
	printf("最大公倍数：%d\n", m * n / b);
}