#include<stdio.h>
int max();

int main(void)
{
	printf("������ABC��ֵ��");
	extern int A, B, C;//ʹ��extern��������������
	//�ȼ���extern A, B, C;
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