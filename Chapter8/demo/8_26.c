#include<stdio.h>
float* search(float(*p)[4]);
int main(void)
{
	float score[][4] = { 60,70,80,90,56,89,67,88,34,78,90,66 };
	float* p;

	for (int i = 0; i < 3; i++)
	{
		p = search(score + i);
		if (p == *(score+i))
		{
			printf("No.%d score:", i);
			for (int j = 0; j < 4; j++)
			{
				printf("%f ", *p++);
			}
			printf("\n");
		}
	}


	return	0;
}

float* search(float(*p)[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (*(*p + i) < 60)
			return *p;
	}
}