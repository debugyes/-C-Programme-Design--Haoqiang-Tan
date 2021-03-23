
/*#include<stdio.h>
int main(void)
{
    int n, i;
    printf("please enter a integer number, n=?");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            break;
        }
    }

    if (i < n)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        printf("%d is a prime number.", n);
    }
    
    
    
    return 0;
}*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int n, i, k;
    printf("please enter a integer number: n = ?");
    scanf("%d", &n);
    k = sqrt(n);
    for (i = 2; i <= k; i++)
    {
        if (n%i == 0)
        {
            break;
        }
    }

    if (i<=k)
    {
        printf("%d is not a prime number.\n", n);
    }
    else
    {
        printf("%d is a prime number.\n", n);
    }
    return 0;
}