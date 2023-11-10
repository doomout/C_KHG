#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b); //a, b의 주소를 인수로 주고 함수 호출
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb) //매개 변수로 포인터 선언
{
	int temp; //교환을 위한 임시변수

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}