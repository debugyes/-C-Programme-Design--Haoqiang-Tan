#include<stdio.h>
int main(void)
{
	int x, y;
	printf("请输入x的值：");
	scanf("%d", &x);
	//写法1
	if (x < 0)
	{
		y = -1;
	}
	else if (x == 0)
	{
		y = 0;
	}
	else if (x > 0)
	{
		y = 1;
	}

	//写法2
	if (x<0)
	{
		y = -1;
	}
	else
	{
		if (x == 0)
		{
			y = 0;
		}
		else
		{
			y = 1;
		}
	}

	//写法3
	if (x >= 0)
	{
		if (x > 0)
		{
			y = 1;
		}
		else
		{
			y = 0;
		}
	}
	else
	{
		y = -1;
	}

	printf("x=%d, y=%d\n", x, y);

	return 0;
}