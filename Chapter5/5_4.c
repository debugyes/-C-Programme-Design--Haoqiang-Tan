//ͳ�ƾ��
#include<stdio.h>
#define SUM 100000
int main(void)
{
	float amount, total, avg;
	int i;
	for (i = 1, total = 0; i <= 1000; i++)
	{
		printf("����������Ŀ:");
		scanf("%f", &amount);
		total += amount;
		if (total >= SUM)
		{
			break;
		}
	}
	avg = total / i;
	printf("num = %d\naverage=%10.2f\n", i, avg);

	return 0;
}

/*
1. break��������ʹ��������ѭ����֮�⣬����ִ��ѭ������������
2. break���ֻ������ѭ������switch���֮�У������ܵ���ʹ��

*/