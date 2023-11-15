#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa,  int size); //함수 선언

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };  
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void  print_ary(int* pa, int size) //매개변수로 포인터 선언
{
	int  i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]); // pa로 배열 요소 표현식 사용
	}
}