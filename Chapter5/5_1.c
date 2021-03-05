// 用while算1-100的和
#include<stdio.h>
int main(void)
{
    int i = 1;
    int sum = 0;
    while(i <= 100)
    {
        sum += i;
        i++;
    }
    printf("1-100的和:%d", sum);
    return 0;
}