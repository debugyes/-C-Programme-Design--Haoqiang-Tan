void e1_4(void);
void e1_5(void);
void e1_6(void);
#include<stdio.h>
int main(void)
{
	e1_6();
	return 0;
}

// 1_4��дһ����������ʱ���Hello World!
void e1_4(void)
{
	printf("Hello World��");
}

void e1_5(void)
{
	//д��һ
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
	//д����
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

}