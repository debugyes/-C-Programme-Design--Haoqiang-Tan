#include<stdio.h>
int prime(int n);
int main(void)
{
	int n;
	printf("please enter n:");
	scanf("%d", &n);

	if (prime(n))
	{
		printf("%d is a prime", n);
	}
	else
	{
		printf("%d is not a prime", n);
	}
	

	return	0;
}

int prime(int n)
{
	int flag = 1;
	for (int i = 2; i < n/2 && flag == 1; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}