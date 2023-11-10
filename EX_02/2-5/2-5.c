#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);  // 10 진수 정수 상수 출력
	printf("%d\n", 014);  // 8 진수 정수 상수 출력
	printf("%d\n", 0xc);  // 16 진수 정수 상수 출력

	printf("%o\n", 12);  // 8 진수 정수 상수 출력
	printf("%x\n", 12);  // 16 진수 소문자 상수 출력
	printf("%X\n", 12);  // 16진수 대문자 상수 출력


	return 0;
}