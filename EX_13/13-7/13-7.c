#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int* resp; //반환값을 저장할 포인터 resp
	resp = sum(10, 20); //반환된 주소는 resp에 저장
	printf("두 정수의 합 : %d\n", *resp); //resp가 가리키는 변수값 출력

	return 0; //두 정수의 합 : 30 출력
}

int* sum(int a, int b)
{
	static int res; //정적 지역 변수

	res = a + b; //두 정수의 합을 res에 저장

	return &res; //정적 지역 변수의 주소 반환
}