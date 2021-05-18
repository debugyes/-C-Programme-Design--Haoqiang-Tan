#include<stdio.h>
int main(void)
{
    int a[5] = {8,6,5,4,1};
    int i, j, temp;
    for (i = 0, j = 4; i < j; i++,j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    
    return 0;
}