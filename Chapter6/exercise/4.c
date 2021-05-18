#include<stdio.h>
int main(void)
{
    int a[11] = {1,4,6,9,13,16,19,28,40,100};
    int number;
    printf("insert number:");
    scanf("%d", &number);
    if(number > a[9])
    {
        a[10] = number;
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (number<a[i])
            {
                for(int j = 11; j >= i; j--)
                {
                    a[j] = a[j-1];
                }
                a[i] = number;
                break;
            }
            
        } 
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d  ", a[i]);
    }
    
    return 0;
}