#include<stdio.h>
int main(void)
{
	int* p, a[10];
	printf("请输入十个整型数据");
	p = a;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", p++);
	}
	p = a;
	for (int i = 0; i < 10; i++, p++)
	{
		printf("%d", *p);
	}
	return	0;
}