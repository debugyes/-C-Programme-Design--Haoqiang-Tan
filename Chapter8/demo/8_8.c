#include<stdio.h>
void inv(int a[], int n);
int main(void)
{
    int a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    inv(a, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return  0;
}
/*
void inv(int a[], int n)
{
    int i, j;
    int temp;
    for (i = 0, j = n-1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}*/

//修改后的函数
void inv(int* a, int n)
{
    int* i,* j;
    int temp;
    i = a;
    j = a+n-1;
    for (; j-i>0; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}