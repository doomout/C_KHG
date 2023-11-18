#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "straw";   //char 배열에 문자열 초기화

	strcat(str, "berry"); //문자열 붙이기
	printf("%s\n", str); //strawberry 출력
	strncat(str, "piece", 3); //3개 문자열 붙이기
	printf("%s\n", str); //strawberrypie 출력

	return 0;
}