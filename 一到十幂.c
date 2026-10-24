#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	long long d=0;
	for (int a = 1;a <= 10;a++)
	{
		long long c = a;
		for (int b = 1;b < a;b++)
		{
			c *= a;
		 }
		printf("%lld\n", c);
		d += c;
		//d += c;
	}
	printf("%lld", d);
	return 0;
}