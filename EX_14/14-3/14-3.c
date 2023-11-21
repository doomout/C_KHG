#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char animal[5][20]; //2차원 char 배열선언
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); //행의 수 계산 = 배열 전체의 크기 / 부분 배열 하나의 크기
	for ( i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for ( i = 0; i < count; i++)
	{
		printf("%s\t", animal[i]);
	}

	return 0;
}