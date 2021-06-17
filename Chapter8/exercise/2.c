#include<stdio.h>
#include<string.h>

void swap(char*, char*);

int main(void)
{
	char str1[50], str2[50], str3[50];

	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2) > 0)
	{
		swap(str1, str2);
	}
	if (strcmp(str1, str3) > 0)
	{
		swap(str1, str3);
	}
	if (strcmp(str2, str3) > 0)
	{
		swap(str2, str3);
	}

	printf("Now, the order is:\n");
	printf("%s\n%s\n%s\n", str1, str2, str3);


	return	0;
}

void swap(char* p1, char* p2)
{
	char t[50];
	strcpy(t, p1);
	strcpy(p1, p2);
	strcpy(p2, t);
}
