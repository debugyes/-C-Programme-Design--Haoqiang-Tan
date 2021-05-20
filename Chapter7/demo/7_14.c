#include<stdio.h>
float Max = 0, Min = 0;
float average(float a[], int n);

int main(void)
{
	float ave, score[10] = { 1,2,3,4,5,6,7,8,9 };

	ave = average(score, 10);
	printf("max = %f, min = %f, ave = %f", Max, Min, ave);

	return	0;
}

float average(float a[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > Max)
		{
			Max = a[i];
		}
		if (a[i] < Min)
		{
			Min = a[i];
		}
		sum += a[i];
	}

	return	sum / n;
}