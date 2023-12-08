#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count; //main.c 의 전역변수 count 공유
extern int total; //input.c 의 전역 변수 total 공유

double average(void)
{
	return total / (double)count; // 입력값의 평균 반환
}