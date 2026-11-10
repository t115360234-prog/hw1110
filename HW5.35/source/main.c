#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev2 = 0; // F(n-2)
    unsigned long long int prev1 = 1; // F(n-1)
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main(void)
{
    unsigned int n;

    printf("請輸入要查詢的Fibonacci項次: ");
    scanf("%u", &n);

    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));

    system("pause");
    return 0;
}