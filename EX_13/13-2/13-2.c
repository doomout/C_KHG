#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign10(void);
void assign20(void);

int a; //전역 변수 호출

int main(void)
{
	printf("함수 호출 전 a 값 : %d\n", a); //전역 변수 a 출력

	assign10();
	assign20();
	printf("함수 호출 후 a 값 : %d\n", a); //전열 변수 a 출력

	return 0;
}

void assign10(void)
{
	a = 10; //전역 변수 a에 10 대입
}

void assign20(void)
{
	int a; //전역 변수와 같은 이름의 지역  변수
	a = 20; //지역 변수 a에 20 저장
}