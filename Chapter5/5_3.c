#include<stdio.h>
int main(void)
{
	int i, sum = 0;
	//使用while实现
	printf("使用while,please enter i, i=");
	scanf("%d", &i);
	while (i <= 10)
	{
		sum += i;
		i++;
	}
	printf("sum=%d\n", sum);

	sum=0;
	//使用do while实现
	printf("使用do while, please enter i, i=");
	scanf("%d", &i);
	do
	{
		sum += i++;
	} while (i <= 10);
	printf("sum=%d", sum);
	return 0;
}


/*
1. for循环格式
	for(表达式1;表达式2;表达式3)
		语句
	常用的格式
	for(循环变量赋初值;循环条件;循环变量增值)
	只要表达式2的值为非0，就执行循环体
2. for循环执行的顺序流程图
3. for语句可以改写成while语句
	表达式1;
	while(表达式2)
	{
		语句;
		表达式3;
	}
	此时for和while无条件等价
4. 表达式1可以省略,但表达式1后的分号不能省略
5. 表达式2可以省略,此时循环无终止地进行下去,也就是认为表达式2始终为真
6. 表达式3可以省略
7. 三个表达式都可以省略
	for(;;)
	即不设初值,不判断条件(表达式2始终为真),循环变量也不增值，无终止地执行循环体语句
8. 表达式1和表达式3,可以用逗号表达式。逗号表达式用逗号分割，逗号表达式按自左至右求解，整个逗号表达式的值为最右边的表达式的值

5.5
1. 三种循环可以相互嵌套

5.6
1. 三种循环一般可以相互代替
*/