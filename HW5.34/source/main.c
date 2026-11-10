#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long power(long long base, int exponent);

int main(void)
{
    long long base;
    int exponent;

    printf("請輸入底數 (base) 與次方 (exponent): ");
    scanf("%lld %d", &base, &exponent);

    printf("%lld 的 %d 次方 = %lld\n", base, exponent, power(base, exponent));

    system("pause");
    return 0;
}

long long power(long long base, int exponent)
{

    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}