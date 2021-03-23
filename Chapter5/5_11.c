/*
#include<stdio.h>
int main(void)
{
	char c;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		{
			if (c >= 'W' && c < 'Z' || c >= 'w' && c <= 'z')
			{
				c = c - 22;
			}
			else
			{
				c = c + 4;
			}
		}
		printf("%c", c);
		c = getchar();
	}
	printf("\n");


	
	return 0;
}

*/

#include<stdio.h>
int main(void)
{
	char c;
	while ((c = getchar())!='\n')
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			c += 4;
			if (c > 'Z' && c <= 'Z'+4 || c > 'z')
			{
				c -= 22;
			}
		}
		printf("%c", c);
	}
	return 0;
}