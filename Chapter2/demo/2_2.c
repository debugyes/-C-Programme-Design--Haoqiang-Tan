#include <stdio.h>
int main(void)
{
    int score;
    int count;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &score);
        if (score > 80) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}