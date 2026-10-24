#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int w;
	printf("键盘录入星期数，显示今天的减肥活动\n");
	scanf("%d", &w);
	switch (w) {
	case 1:
		printf("周一：跑步\n");
		break;
	case 2:
		printf("周二：游泳\n");
		break;
	case 3:
		printf("周三：慢走\n");
		break;
	case 4:
		printf("周四：动感单车\n");
		break;
	case 5:
		printf("周五：拳击\n");
		break;
	case 6:
		printf("周六：爬山\n");
		break;
	case 7:
		printf("周日：好好吃一顿\n");
		break;
	default:
		printf("错误\n");
		break;

	}
	return 0;
}