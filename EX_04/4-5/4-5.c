#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	int c = 10, d = 12;

	res = (a > b) ? a : b;
	printf("Å« °ª : %d\n\n", res);

	printf("c & d :  %d\n", c & d);
	printf("c ^ d :  %d\n", c ^ d);
	printf("c | d :  %d\n", c | d);
	printf("~c :  %d\n", ~c);
	printf("c << 1 :  %d\n", c << 1);
	printf("c >> 2 :  %d\n", c >> 2);

	return 0;
}