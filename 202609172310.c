#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int c = 0;
	printf("键盘录入两个数字：\n");
	scanf("%d %d", &a, &b);
	for (int i = a;i <= b;i++) {
		if (i % 6 == 0 && i % 8 == 0) {
			c ++ ;
		}
	}
	printf("%d", c);
	return 0;
}