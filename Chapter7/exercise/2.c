#include<stdio.h>
#include<math.h>

float x1, x2, disc, p, q;

void bigger_than_zero(float a, float b, float c);
void equal_to_zero(float a, float b, float c);
void smaller_than_zero(float a, float b, float c);

float main(void)
{
	float a, b, c;
	printf("ÇëÊäÈëa, b, cµÄÖµ£º");
	scanf("%f%f%f", &a, &b, &c);
	disc = b * b - 4 * a * c;
	if (disc > 0)
	{
		bigger_than_zero(a, b, c);
		printf("x1 = %f, x2 = %f\n", x1, x2);
	}
	else if (disc < 0)
	{
		smaller_than_zero(a, b, c);
		printf("x1=%f+%fi, x2 = %f-%fi\n", p, q, p, q);
	}
	else
	{
		equal_to_zero(a, b, c);
		printf("x1 = %f, x2 = %f\n", x1, x2);
	}


	return	0;
}

void bigger_than_zero(float a, float b, float c)
{
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
}

void equal_to_zero(float a, float b, float c)
{
	x1 = x2 = (-b) / 2 * a;
}

void smaller_than_zero(float a, float b, float c)
{
	p = -b / (2 * a);
	q = sqrt(-disc) / (2 * a);
}