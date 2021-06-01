#include<stdio.h>
void swap(int* p, int* q);
int main(void)
{
	int a, b;
	int* p, * q;
	printf("ÇëÊäÈëabµÄÖµ£º");
	scanf("%d%d", &a, &b);
	p = &a;
	q = &b;
	if (*p < *q)
	{
		swap(p, q);
	}

	printf("max = %d, min = %d", *p, *q);	

	return	0;
}

void swap(int* p, int* q)
{
	int* temp;
	temp = p;
	p = q;
	q = temp;
}