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
��С������=�������ĳ˻������Լ��
*/

/*
���Լ��1��շת�����
1. a%b������c
2. ���c = 0,��bΪ���Լ��
3. ���c������0,��a = b,b = c����ִ�в���1��
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

	printf("���Լ����%d\n", b);
	printf("��С��������%d\n", m * n / b);
}


/*
�����
1. ���a>b,��a=a-b
2. ���a<b,��b=b-a
3. ���a=b,��a��bΪ���������Լ��
4. ��a��b,���ٻ�ȥִ��
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
	printf("���Լ����%d\n", b);
	printf("��󹫱�����%d\n", m * n / b);
}