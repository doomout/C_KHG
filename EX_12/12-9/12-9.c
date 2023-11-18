#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "mango tree";   //char 배열에 문자열 초기화

	strncpy(str, "apple-pie", 5); //apple-pie 에서 5 문자만 복사
	printf("%s\n", str); //apple tree 출력

	return 0; 
}