#include<stdio.h>

#define N 5

struct Student
{
	int num;
	char name[20];
	float score;
};

int main(void)
{
	struct Student stu[5] = { {10101, "Zhang", 78}, {10103, "Wang", 98.5}, {10106, "Li", 86},
		{10108, "Ling", 73.5}, {10110, "Sun", 100} };

	struct Student temp;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (stu[j].score>stu[i].score)
			{
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}	
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d\t%s\t%f\n", stu[i].num, stu[i].name, stu[i].score);
	}
}