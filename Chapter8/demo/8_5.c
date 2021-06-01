#include<stdio.h>	

void exchange_judge(int* p, int* q, int* r);
void swap(int* pointer1, int* pointer2);

int main(void)
{
	int a, b, c;
	int* p, * q, * r;
	printf("ÇëÊäÈëabcµÄÖµ£º");
	scanf("%d%d%d", &a, &b, &c);
	p = &a;
	q = &b;
	r = &c;
	exchange_judge(p, q, r);

	printf("%d>%d>%d", *p, *q, *r);
	return	0;
}

void exchange_judge(int* p, int* q, int* r)
{
	if (*p < *q)
	{
		swap(p, q);
	}
	if (*p < *r)
	{
		swap(p, r);
	}
	if (*q < *r)
	{
		swap(q, r);
	}
}

void swap(int* pointer1, int* pointer2)
{
	int temp;
	temp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = temp;
}