#include<stdio.h>
int max(int a, int b);
int main(void)
{
    int a[10] = {4,7,0,-3,4,34,67,-42,31};
    int i, m, n;
    
    for (i = 1, m=a[0], n = 0; i < 10; i++)
    {
        if(max(m, a[i])>m)
        {
            m = max(m, a[i]);
            n = i;
        }
    }

    printf("max = %d, index = %d", m, n);
    
    
    return  0;
}

int max(int a, int b)
{
    return (a>b?a:b);
}