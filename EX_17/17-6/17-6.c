#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct score //구조체 선언
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score doom = {90,80,70};  //구조체 변수 선언 + 초기화
	struct score* ps = &doom; //구조체 포인터에 주소 저장

	//구조체 포인터로 멤버 접근
	printf("국어 : %d\n", (*ps).kor); // . 연산자가 *보다 우선순위가 높아서 *을 ()로 묶어줘야 한다.

	//-> 연산자 사용으로 멤버 접근
	printf("영어 : %d\n", ps -> eng); 
	printf("수학 : %d\n", ps -> math);

	return 0;
}