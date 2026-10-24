#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int b = 0;
	for (int a = 1;a <= 5;a++) {
		 b = b + a;
	}
	printf("%d\n", b);
	return 0;
}