//
// Created by かとうめぐみ on 2021/2/11.
//
#include<stdio.h>
int main(void)
{
    float a, b, t;
    scanf("%f, %f", &a, &b);
    if(a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    printf("%5.2f,%5.2f\n", a, b);
    return 0;
}