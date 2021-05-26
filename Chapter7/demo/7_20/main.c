#include<stdio.h>
extern void delet_string(char str[], char ch);
extern void print_string(char str[]);
extern void enter_string(char str[]);
int main(void)
{
	char str[80], ch;
	printf("please enter string:");
	enter_string(str);
	printf("please enter char:");
	scanf("%c", &ch);
	delet_string(str, ch);
	print_string(str);

	return	0;
}