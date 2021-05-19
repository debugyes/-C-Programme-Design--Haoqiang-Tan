#include<stdio.h>
void sort(int a[], int n);
int main(void)
{
    int a[10] = {45,2,9,0,-3,54,12,5,66,33}, i;
    /*
    printf("enter array:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    */

    sort(a, 10);
    for (int  i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }
    
    return 0;
}
void sort(int a[], int n)
{
    int t;
    for(int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}