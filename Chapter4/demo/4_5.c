#include<stdio.h>
int main(void)
{
	int x, y;
	printf("������x��ֵ��");
	scanf("%d", &x);
	//д��1
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

	//д��2
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

	//д��3
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