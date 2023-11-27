#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student //구조체 선언
{
	int num; //int형 멤버
	double grade; //double 형 멤버
}; //세미콜론 사용

int main(void)
{
	struct student s1; //구조체 변수 선언
	s1.num = 2; //num에 저장
	s1.grade = 2.7; //grade에 저장
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}