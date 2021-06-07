#include<stdio.h>
void average(float* p, int n);
void search(float(*p)[4], int n);

int main(void)
{
	float score[3][4] = { 65,67,70,60,80,87,90,81,90,99,100,98 };
	average(*score, 12);
	search(score, 2);

	return	0;
}

void average(float* p, int n)
{
	float* p_end;
	float sum = 0.0, aver;

	for (p_end = p + n - 1; p <= p_end; p++)
	{
		sum += *p;
	}
	aver = sum / n;
	printf("average = %f\n", aver);
}

void search(float(*p)[4], int n)
{
	printf("The score of No.%d are:\n", n);
	for (int i = 0; i < 4; i++)
	{
		printf("%5.2f ", *(*(p + 2) + i));
	}
}