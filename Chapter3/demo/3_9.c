#include<stdio.h>
int main(void)
{
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');

    //改进
    
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar('\n');
    return 0;
}