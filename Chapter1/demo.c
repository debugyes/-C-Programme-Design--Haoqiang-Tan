#include<stdio.h>
void demo1_1(void);
void demo1_2(void);
void demo1_3(void);
int max1_3(int x, int y);
int main(void)
{
	//demo1_1();
	//demo1_2();
	demo1_3();
	return 0;
}

//����Ļ�����һ����Ϣ
void demo1_1(void)
{
	printf("this is a C program.\n");
}

//����������֮��
void demo1_2(void)
{
	int a, b, sum;
	a = 123;
	b = 456;
	sum = a + b;
	printf("sum is %d\n", sum);
}

//�����������еĽϴ���
void demo1_3(void)
{
	int a, b, c;
	printf("%d %d", &a, &b);
	c = max1_3(a, b);
	printf("max = %d\n", c);
}

int max1_3(int x, int y)
{
	int z;
	if (x>y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}