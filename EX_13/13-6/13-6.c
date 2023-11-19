#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_ten(int *pa); //매개변수로 포인터 pa 선언

int main(void)
{
	int a = 10;

	add_ten(&a); //a의 주소를 인수로 준다.
	printf("a : %d\n", a); //증가된 a값 출력

	return 0; //a : 20 출력

}

void add_ten(int *pa)
{
	*pa = *pa + 10;
}