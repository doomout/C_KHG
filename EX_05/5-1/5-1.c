#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;
	int c = 10;
	int d = 0, e = 0;

	if (a > 10)
	{
		b = a;
	}

	if (c >= 0)
	{
		c = 1;
	}
	else
	{
		c = -1;
	}

	if (d > 0)
	{
		e = 1;
	}
	else if (d == 0)
	{
		e = 2;
	}
	else
	{
		e = 3;
	}

	printf("a : %d, b : %d\n", a, b);
	printf("c : %d\n", c);
	printf("e : %d\n", e);

	return 0;
}