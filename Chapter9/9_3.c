#include<stdio.h>
#include<string.h>

int main(void)
{
	struct Person
	{
		char name[20];
		int count;
	}leader[3] = {"Li", 0, "Zhang", 0, "Sun", 0};

	char leader_name[20];

	for (int i = 0; i < 10; i++)
	{
		printf("please enter a name:");
		scanf("%s", leader_name);

		for (int j = 0; j < 3; j++)
		{
			if (strcmp(leader_name, leader[j].name) == 0)
			{
				leader[j].count++;
			}
		}
	}

	printf("\nthe result is:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d\n", leader[i].name, leader[i].count);
	}
	return	0;
}