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

	printf("a의 값 : %d\n", a);
	printf("b의 값 : %d\n", b);
	printf("초기값 c = %d, d = %d\n", c, d);
	printf("전위형 : (++c) * 3 = %d, 후위형 : (d++) * 3 = %d\n", pre, post);

	return 0;
}