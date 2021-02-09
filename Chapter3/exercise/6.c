#include<stdio.h>
int main(void)
{
    char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
    putchar(c1+4);
    putchar(c2+4);
    putchar(c3+4);
    putchar(c4+4);
    putchar(c5+4);
    putchar('\n');

    printf("%c", c1+4);
    printf("%c", c2+4);
    printf("%c", c3+4);
    printf("%c", c4+4);
    printf("%c", c5+4);
    return 0;
}