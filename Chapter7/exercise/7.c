#include<stdio.h>
void cpy(char a[], char v[80]);
int main(void)
{
	char a[80], v[80];
	scanf("%s", a);

	cpy(a, v);
	printf("%s", v);
	return	0;
}

void cpy(char a[], char v[80])
{
	int j = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'u' || a[i] == 'U')
		{
			v[j] = a[i];
			j++;
		}
	}
	v[j] = '\0';
}