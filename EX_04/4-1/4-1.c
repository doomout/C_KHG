#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	double apple;
	int banana;
	int orange;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("aÀÇ °ª : %d, bÀÇ °ª : %d\n", a, b);
	printf("µ¡¼À : %d\n", sum);
	printf("»¬¼À : %d\n", sub);
	printf("°ö¼À : %d\n", mul);
	printf("aÀÇ À½¼ö ¿¬»ê : %d\n", inv);

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}