#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력  : ");
	fgets(str, sizeof(str), stdin); //배열명, 배열의 크기, 표준 입력
	printf("입력한 문자열은 %s입니다.\n", str);

	return 0;
}