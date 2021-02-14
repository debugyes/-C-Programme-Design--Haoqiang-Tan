#include<stdio.h>
int main(void)
{
	char grade;
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("85~100\n");
		break;
	case 'B':
		printf("70~84");
		break;
	case 'C':
		printf("60~69");
		break;
	case 'D':
		printf("60ртоб");
		break;
	default:
		printf("enter data error!");
		break;
	}
	return 0;
}