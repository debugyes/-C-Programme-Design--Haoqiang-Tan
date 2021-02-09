#include<stdio.h>
int main(void)
{
    double d = 300000;
    double p = 6000;
    double r = 0.01;
    double m = log(p/(p-d*r))/log(1+r);
    printf("%.1lf\n", m);
    return 0;
}