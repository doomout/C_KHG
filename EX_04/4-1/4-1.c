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

	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� ���� ���� : %d\n", inv);

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}