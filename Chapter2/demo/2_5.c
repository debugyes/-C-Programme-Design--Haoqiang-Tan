#include <stdio.h>
int main(void)
{
    int val;
    int i;
    scanf("%d", &val);

    //д��һ
    /*
    for (i = 2; i < val; ++i) {
        if (val % i == 0) {
            break;
        }
    }
    if (i == val) {
        printf("%d������", val);
    }
    else {
        printf("%d��������", val);
    }*/

    //д��2
    int k = (int)sqrt((double)val);
    for (i = 2; i <= k ; ++i) {
        if (val % i == 0)
        {
            break;
        }
    }
    if (i > k)
    {
        printf("%d������", val);
    }
    else
    {
        printf("%d����������", val);
    }
    return 0;
}

