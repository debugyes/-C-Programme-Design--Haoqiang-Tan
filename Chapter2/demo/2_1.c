//2_1 ��1x2x3x4x5
#include <stdio.h>
void main(void)
{
    int sum = 1;
    for (int i = 2; i < 6; i++)
    {
        sum *= i;
    }
    printf("%d\n", sum);
    return 0;
}