//统计捐款
#include<stdio.h>
#define SUM 100000
int main(void)
{
	float amount, total, avg;
	int i;
	for (i = 1, total = 0; i <= 1000; i++)
	{
		printf("请输入捐款数目:");
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
1. break的作用是使流程跳到循环体之外，接着执行循环体下面的语句
2. break语句只能用于循环语句和switch语句之中，而不能单独使用

*/