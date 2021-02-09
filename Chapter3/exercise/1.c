#include<stdio.h>
#include<math.h>
int main(void)
{
    double r = 0.07;
    double n = 10;
    printf("p = %lf\n", pow(1+r, n));
    return 0;
}