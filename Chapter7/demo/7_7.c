#include<stdio.h>
int fac(int n);
int main(void)
{
    printf("%d", fac(10));
    return  0;
}

int fac(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return fac(n-1)*n;
    }
}