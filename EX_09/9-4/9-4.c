#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;   //변수 선언과 초기화
	const int* pa = &a; //포인터 pa는 변수 a를 가리킨다.

	printf("변수 a 값 : %d\n", *pa);  //포인터를 간접 참조 하여 a 출력
	pa = &b; //포인터가 b를 가르키게 한다. 
	printf("변수 b의 값 : %d\n", *pa); //포인터가 b를 간접 참조
	pa = &a; //포인터가 다시 a를 가르킨다. 
	a = 20; //a를 직접 참조하여 값을 바꾼다.
	printf("변수 a의 값 : %d\n", *pa); //포인터로 간접 참조하여 바뀐 값을 출력한다.

	return 0;
}