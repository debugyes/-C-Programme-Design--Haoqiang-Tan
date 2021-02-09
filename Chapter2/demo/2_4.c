#include <stdio.h>
int main(void)
{
    double sum = 1;
    int flag = 1;
    for (int i = 2; i <= 100; ++i) {
        flag *= -1;
        sum += flag * (1.0 / i);
    }
    printf("%lf", sum);
    return 0;
}