#include<stdio.h>
int main(void)
{
	char c = getchar();
	(c >= 'A' && c <= 'Z') ? c += 32 : c;
	printf("%c\n", c);
	return 0;
}