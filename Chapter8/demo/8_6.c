#include<stdio.h>
void index_print(int a[]);
void name_print(int a[]);
void pointer_print(int* p);
int main(void)
{
	int a[10];
	printf("请输入数组的值");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);//&a[i] == a+i
	}
	index_print(a);
	name_print(a);
	pointer_print(a);
	return	0;
}

void index_print(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void name_print(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
}

void pointer_print(int* a)
{
	int* p;

	for (p = a; p < (a + 10); p++)
	{
		printf("%d ", *p);
	}
	printf("\n");
}