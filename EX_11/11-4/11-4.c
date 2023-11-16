#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch; //입력문자를 저장할 변수
	int i;

	for ( i = 0; i < 3; i++)
	{
		scanf("%c", &ch); //문자 입력
		printf("%c", ch); //입력된 문자 출력
	}

	return 0;
}