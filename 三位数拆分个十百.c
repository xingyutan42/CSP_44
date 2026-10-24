#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{   int a;
    printf("键盘录入一个两位整数：");
    scanf("%d", &a);
    int ge = a % 10;
    int shi = a / 10 % 10;
    printf("%d", ge!=7&&shi!=7);
    return 0;
}
