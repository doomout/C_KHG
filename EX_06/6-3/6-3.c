#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1;

	do
	{
		a = a * 2; //a의 값을 2배로 늘린다.
	} while (a < 10); //a가 10보다 작으면 9번 반복

	printf("a : %d\n", a); //a 출력

	return 0;
}