#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER}; //열거헝 선언

int main(void)
{
	enum season ss; //열거형 변수 선언
	char* pc = NULL; //문자열을 저장할 포인터

	ss = SPRING; //열거 멤버 값 대입
	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swinmming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
		break;
	}
	printf("나의 레저 활동 => %s\n", pc);

	return 0;
}