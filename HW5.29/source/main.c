#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b)
{
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}

int main(void)
{
    int num1, num2;
    printf("請輸入兩個整數: ");
    scanf("%d %d", &num1, &num2);

    printf("最小公倍數 (LCM) 為: %d\n", lcm(num1, num2));

    system("pause");
    return 0;
}