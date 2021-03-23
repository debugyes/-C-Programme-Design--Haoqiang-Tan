#include<stdio.h>
int main(void)
{
    int f1 = 1, f2 = 1, f3;
    int i;
    int j = 1;
    printf("%12d\n%12d\n", f1, f2);
    for (i = 0; i <= 38; i++)
    {
        f3 = f1+f2;
        printf("%12d\n", j++,f3);
        f1 = f2;
        f2 = f3;
    }
    
    //改进算法
    int f4=1, f5=1;
    for (i = 1; i <= 20; i++)
    {
        printf("%12d %12d", f4, f5);
        if(i%2==0)
        {
            printf("\n");
        }
        f4 = f4+f5;
        f5 = f4+f5;
    }
    return 0;
}