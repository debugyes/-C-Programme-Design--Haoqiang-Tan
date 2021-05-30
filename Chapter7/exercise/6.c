#include<stdio.h>
void concatenate(char string1[], char string2[], char string[]);
int main(void)
{
	char string1[100], string2[100], string[100];
	printf("input string1: ");
	scanf("%s", string1);
	printf("input string2: ");
	scanf("%s", string2);
	

	concatenate(string1, string2, string);
	printf("%s", string);

	return	0;
}

void concatenate(char string1[], char string2[], char string[])
{
	int i, j;
	for (i = 0; string1[i] != '\0'; i++)
	{
		string[i] = string1[i];
	}
	for (j = 0; string2[j] != '\0'; j++, i++)
	{
		string[i] = string2[j];
	}
	string[i] = '\0';

}