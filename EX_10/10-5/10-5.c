#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa); //함수 선언

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };   //배열 선언

	print_ary(ary);

	return 0;
}

void  print_ary(int* pa) //매개변수로 포인터 선언
{
	int  i;

	for ( i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]); // pa로 배열 요소 표현식 사용
	}
}