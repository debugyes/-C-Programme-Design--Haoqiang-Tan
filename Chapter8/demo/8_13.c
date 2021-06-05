#include<stdio.h>
int main(void)
{
	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	int(*p)[4], i, j;
	//此时p只能指向一个包含4个元素的一维数组，不能指向一维数组中的某一元素
	p = a;//此时p就等价于a
	printf("请输入行和列");
	scanf("%d %d", &i, &j);
	printf("a[%d, %d] = %d", i, j, *(*(p + i) + i));

	//如果p要指向一维数组
	int b[4] = { 1,3,5,7 };
	p = &a;
	printf("%d\n", (*p)[3]);
	//不能写成p=a


	return	0;
}

