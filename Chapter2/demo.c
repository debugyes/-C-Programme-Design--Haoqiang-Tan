#include <stdio.h>
void list(void);
void factorial(void);
void countStudent(void);
void leapYear(void);
void judgePrime(void);

int main()
{
    judgePrime();
    return 0;
}

//2_1 求1x2x3x4x5
void factorial(void)
{
    int sum = 1;
    for (int i = 2; i < 6; i++)
    {
        sum *= i;
    }
    printf("%d\n", sum);
}

//2_2 有50个学生，要求输出成绩在80分以上的学生的个数
void countStudent(void) {
    int score;
    int count;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &score);
        if (score > 80) {
            count++;
        }
    }
    printf("%d\n", count);
}

//2_3 判定2000-2500年中的每一年是否为闰年，并将结果输出
/*
判断闰年的条件：
能被4整除，不能被100整除
能被400整除
*/
void leapYear(void)
{
    for (int year = 2000; year <= 2500; ++year)
    {

        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            printf("%d是润年\n", year);
        }
    }
}

//2_4 求数列
void list(void)
{
    double sum = 1;
    int flag = 1;
    for (int i = 2; i <= 100; ++i) {
        flag *= -1;
        sum += flag * (1.0 / i);
    }
    printf("%lf", sum);
}

//2_5 给出一个大于或等于3的正整数，判断它是不是一个素数
/*
 * 判断是否是素数的方法
 * 除了1和该数本身之外，不能被其他任何整数整除的数
 * 循环判断标准：i≤n
 * */
#include<math.h>
void judgePrime(void)
{
    int val;
    int i;
    scanf("%d", &val);

    //写法一
    /*
    for (i = 2; i < val; ++i) {
        if (val % i == 0) {
            break;
        }
    }
    if (i == val) {
        printf("%d是素数", val);
    }
    else {
        printf("%d不是素数", val);
    }*/

    //写法2
    int k = (int)sqrt((double)val);
    for (i = 2; i <= k ; ++i) {
        if (val % i == 0)
        {
            break;
        }
    }
    if (i > k)
    {
        printf("%d是素数", val);
    }
    else
    {
        printf("%d不是是素数", val);
    }
    
}