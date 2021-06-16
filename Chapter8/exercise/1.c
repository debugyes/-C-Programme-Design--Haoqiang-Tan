#include<stdio.h>
int main(void)
{
	int a, b, c;
	int* p, * q, * t, * r;

	p = &a;
	q = &b;
	r = &c;

	scanf("%d%d%d", p, q, r);
	if (*p > *q)
	{
		t = p;
		p = q;
		q = t;
	}
	if (*p > *r)
	{
		t = p;
		p = r;
		r = t;
	}
	if (*q > *r)
	{
		t = q;
		q = r;
		r = t;
	}

	printf("%d<%d<%d", *p, *q, *r);
}