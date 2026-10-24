#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int y1(int a1, int a2);
int y2(int a1, int a2);
int y3(int a1, int a2);
int y4(int a1, int a2);

int main()
{
	printf("-------------------------------------------------\n");
	printf("用户键盘录入三个数字，\n前两个表示计算的数字，\n第三个数字表示调用的函数。\n");
	printf("1:加法\n2:减法\n3:乘法\n4:除法\n");
	printf("-------------------------------------------------\n");
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	int (*p[4])(int, int) = { y1,y2,y3,y4 };
	int res=(p[n3 - 1])(n1,n2);
	printf("结果是：%d", res);
	return 0;
}

int y1(int a1, int a2)
{
	printf("加法运算\n");
	return a1 + a2;
}

int y2(int a1, int a2)
{
	printf("减法运算\n");
	return a1 - a2;
}
int y3(int a1, int a2)
{
	printf("乘法运算\n");
	return a1 * a2;
}
int y4(int a1, int a2)
{
	printf("除法运算\n");
	return a1 / a2;
}
