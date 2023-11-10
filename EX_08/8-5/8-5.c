#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");  //str1 을 tiger로 변경
	strcpy(str2, str1); //str2에 str1 배열의 문자열 복사
	printf("%s, %s\n", str1, str2);  

	return 0;
}