#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	for (int a = 1;a <= 1000;a++)
	{
		int a1=a%10,
			a2=a/10%10,
			a3=a/100%10;
		if (a1 + a2 + a3 == 15)
		{
			printf("%d\n", a);
		}
	}
	return 0;
}