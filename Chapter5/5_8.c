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
        printf("%d:%d\n", j++,f3);
        f1 = f2;
        f2 = f3;
    }
    
    return 0;
}