#include<stdio.h>
#include<string.h>
void inverse(char str[]);
int str[100];
int main(void)
{
	printf("������str��ֵ��");
	gets(str);
	inverse(str);
	printf("ת�����str��ֵ��");
	puts(str);

	return	0;
}

void inverse(char str[])
{
	char t;
	int i, j;
	for (i = 0, j = strlen(str)-1; i < j; i++, j--)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
}