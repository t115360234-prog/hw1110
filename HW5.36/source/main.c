#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("把盤子 1 從柱子 %c 移動到柱子 %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("把盤子 %d 從柱子 %c 移動到柱子 %c\n", n, from_rod, to_rod);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main(void)
{
    int n;
    printf("請輸入河內塔的盤子數量: ");
    scanf("%d", &n);

    printf("\n移動步驟如下:\n");
    hanoi(n, 'A', 'C', 'B');

    system("pause");
    return 0;
}