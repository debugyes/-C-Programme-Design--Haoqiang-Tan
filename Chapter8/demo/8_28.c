#include<stdio.h>
int main(void)
{
	char* name[] = { "Follow me", "BASIC", "Great Wall","FORTRAN", "Computer design" };
	char** p;
	for (int i = 0; i < 5; i++)
	{
		p = name + i;
		printf("%s\n", *p);
	}

	return	0;
}