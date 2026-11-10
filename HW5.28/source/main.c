#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char changeCase(char c);

int main(void)
{
    char ch;
    printf("請輸入一個英文字母: ");
    scanf(" %c", &ch);

    printf("轉換大小寫後: %c\n", changeCase(ch));

    system("pause");
    return 0;
}

char changeCase(char c)
{
    if (c >= 'a' && c <= 'z') {
        return c - 32; 
    }
    else if (c >= 'A' && c <= 'Z') {
        return c + 32; 
    }
    return c; 
}