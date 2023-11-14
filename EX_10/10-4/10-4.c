#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };   //배열 선언
	int* pa = ary; //1번 째 배열 요소 주소
	int* pb = pa + 3; //4번 째 배열 요소 주소

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	
	pa++;
	printf("pb - pa : %u\n", pb - pa);   //두 포인터의 뺄셈

	printf("앞에  있는 배열 요소의 값 출력 : ");
	
	if (pa < pb) 
		printf("%d\n", *pa);
	else 
		printf("%d\n", *pb);

	return 0;
}