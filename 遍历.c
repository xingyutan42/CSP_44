#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 1;i <= 10;i++)
	{
		srand(time(NULL));
		int r = rand() % 100 + 1;
		printf("%d", r);

	}
	return 0;
}