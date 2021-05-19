#include<stdio.h>
float average(float array[10]);
int main(void)
{
    float array[10] = {100, 56, 78, 98, 67.5, 99, 54, 88.5, 76, 58};

    printf("average = %f", average(array));
    return 0;
}

float average(float array[10])
{
    int i;
    float aver, sum = array[0];
    for (int i = 1; i < 10; i++)
    {
        sum += array[i];
    }
    aver = sum/10;
    return aver;
}