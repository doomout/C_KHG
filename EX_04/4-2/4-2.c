#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 10;
	int c = 5, d = 5;
	int pre, post;
	
	++a;
	--b;
	pre = (++c) * 3;
	post = (d++) * 3;

	printf("a�� �� : %d\n", a);
	printf("b�� �� : %d\n", b);
	printf("�ʱⰪ c = %d, d = %d\n", c, d);
	printf("������ : (++c) * 3 = %d, ������ : (d++) * 3 = %d\n", pre, post);

	return 0;
}