#include<stdio.h>
int main(void)
{
	char a[3][80];
	int nupper, nlower, number, nspace, nother;
	nupper = nlower = number = nspace = nother = 0;
	for (int i = 0; i < 3; i++)
	{
		gets(a[i]);
		for (int j = 0; a[i][j] != '\0'; j++)
		{
			if (a[i][j] >= 'a' && a[i][j] <= 'z')
			{
				nlower++;
			}
			else if (a[i][j] >= 'A' && a[i][j] <= 'Z')
			{
				nupper++;
			}
			else if (a[i][j] >= '0' && a[i][j] <= '9')
			{
				number++;
			}
			else if (a[i][j] == ' ')
			{
				nspace++;
			}
			else
			{
				nother++;
			}
		}
	}
	
	printf("uppper:%d\nlower:%d\nnumber:%d\nnspace:%d\nnother:%d\n", nupper, nlower, number, nspace, nother);

	return	0;
}