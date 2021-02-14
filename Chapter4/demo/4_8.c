#include<stdio.h>
int main(void)
{
	int year, leap;
	printf("enter year:");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		leap = 1;
	}
	else
	{
		leap = 0;
	}

	if (leap)
	{
		printf("%d is a leap year.", year);
	}
	else
	{
		printf("%d isn't a leap year.", year);
	}
	return 0;
}