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

//2_1 ��1x2x3x4x5
void factorial(void)
{
    int sum = 1;
    for (int i = 2; i < 6; i++)
    {
        sum *= i;
    }
    printf("%d\n", sum);
}

//2_2 ��50��ѧ����Ҫ������ɼ���80�����ϵ�ѧ���ĸ���
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

//2_3 �ж�2000-2500���е�ÿһ���Ƿ�Ϊ���꣬����������
/*
�ж������������
�ܱ�4���������ܱ�100����
�ܱ�400����
*/
void leapYear(void)
{
    for (int year = 2000; year <= 2500; ++year)
    {

        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            printf("%d������\n", year);
        }
    }
}

//2_4 ������
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

//2_5 ����һ�����ڻ����3�����������ж����ǲ���һ������
/*
 * �ж��Ƿ��������ķ���
 * ����1�͸�������֮�⣬���ܱ������κ�������������
 * ѭ���жϱ�׼��i��n
 * */
#include<math.h>
void judgePrime(void)
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
    
}