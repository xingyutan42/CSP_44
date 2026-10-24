#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a1[100] = "上双倍", a2[100] = "据等会", a3[100] = "今后的",
		a4[100] = "卡丹麦", a5[100] = "看动画";
	char arr[5] = { a1,a2,a3,a4,a5 };
	char* p = arr;
	for (int i = 0;i < 5;i++)
	{
		printf("%s", p);
		p++;
	}
	return 0;
}