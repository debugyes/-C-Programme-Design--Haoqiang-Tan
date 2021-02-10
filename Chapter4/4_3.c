//
// Created by かとうめぐみ on 2021/2/11.
//
#include<stdio.h>
int main(void)
{
    float a, b, c, t;
    scanf("%f,%f,%f", &a, &b, &c);
    if(a>b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(a>c)
    {
        t = a;
        a = c;
        c = t;
    }
    if(b>c)
    {
        t = b;
        b = c;
        c = t;
    }

    printf("%d<%d<%d", a, b, c);
    return 0;
}
