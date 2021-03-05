//用do while实现1-100的和
#include<stdio.h>
int main(void)
{
    int i = 1;
    int sum = 0;
    do
    {
        sum += i;
    }while(++i <= 100);
    printf("1-100的和:%d", sum);
    return 0;
}