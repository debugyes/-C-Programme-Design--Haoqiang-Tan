#include<stdio.h>
int main(void)
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
    return 0;
}