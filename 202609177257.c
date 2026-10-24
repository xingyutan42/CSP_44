#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int w;
	printf("请拨号\n");
	scanf("%d", &w);
	switch (w) {
	case 1:
		printf("机票查询\n");
		break;
	case 2:
		printf("机票预订\n");
		break;
	case 3:
		printf("机票改签\n");
		break;
	case 4:
	default:
		printf("退出服务\n");
		break;
	
	}
	return 0;
}