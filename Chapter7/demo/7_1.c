#include<stdio.h>
void	print_star();
void print_message();
int main(void)
{
	print_star();
	print_message();
	print_star();

	return	0;
}

void print_star()
{
	printf("****************\n");
}

void print_message()
{
	printf("Hello World\n");
}