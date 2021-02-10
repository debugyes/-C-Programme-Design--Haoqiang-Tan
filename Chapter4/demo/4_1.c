#include<stdio.h>
#include<math.h>
int main(void)
{
    double a, b, c, disc, x1, x2, p, q;
    printf("请输入三个值：");
    scanf("%lf%lf%lf", &a, &b, &c);
    disc = b*b-4*a*c;
    if(disc >= 0)
    {
        p=-b/(2.0*a);
        q=sqrt(disc)/(2.0*a);
        x1=p+q;
        x2=p-q;
        printf("real roots:\nx1=%7.2f\nx2=%7.2f\n", x1, x2);
    }
    else
    {
        printf("此方程无实根");
    }
    return 0;
}