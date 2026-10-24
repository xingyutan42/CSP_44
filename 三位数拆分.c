#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("请输入一个三位数\n");
    int num3;
    scanf("%d", &num3);
    int a = num3 / 100,
        b = num3 / 10 % 10,
        c = num3 % 10;


    printf("百位是：%d\n", a);
    printf("十位是：%d\n", b);
    printf("个位是：%d", c);
    return 0;
}
