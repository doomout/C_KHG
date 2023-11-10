#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height); //여기서 변수 a에 값 입력
	printf("나이는 %d살, 키는 %.1lfcm 입니다.\n", age, height); //입력한 값 출력

	return 0;
}