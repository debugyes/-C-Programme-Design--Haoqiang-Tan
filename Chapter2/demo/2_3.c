#include <stdio.h>
int main(void)
{
    for (int year = 2000; year <= 2500; ++year)
    {

        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            printf("%d������\n", year);
        }
    }
    return 0;
}