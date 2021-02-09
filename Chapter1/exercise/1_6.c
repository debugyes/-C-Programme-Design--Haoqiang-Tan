#include<stdio.h>
int main(void)
{
    int a, b, c;

	printf("input:");
	scanf("%d%d%d", &a, &b, &c);
	//д��һ
	if (a>b)	
	{
		if (a > c)
		{
			printf("%d�����\n", a);
		}
		else
		{
			printf("%d�����\n", c);
		}
	}
	else
	{
		if (b>c)
		{
			printf("%d�����\n", b);
		}
		else
		{
			printf("%d�����\n", c);
		}
	}

	
	//д����
	printf("%d�����\n", (a > b) ? (a > c) ? a : c : (b > c) ? b : c);
    return 0;
}