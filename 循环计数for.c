#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int a, b;
	int d = 0;
	printf("键盘录入两个数字：\n");
	scanf("%d %d", &a, &b);
	if (a <= b)
	{
		for (int c = a;c <= b;c++)
		{
			if (c % 6 == 0 && c % 8 == 0)
			{
				printf("%d\n", c);
				d = d++;
			}
		}
	}
	else
	{
		for (int c = b;c <= a;c++)
		{
			if (c % 6 == 0 && c % 8 == 0)
			{
				printf("%d\n", c);
				d = d++;
			}
		}
	}
	printf("%d", d);
	return 0;
}