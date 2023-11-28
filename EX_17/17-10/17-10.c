#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union student //공용체 선언
{
	int num; //학번을 저장
	double grade; //학점을 저장
};

int main(void)
{
	union student s1 = { 315 }; //공용체 변수의 선언과 초기화(int형으로 초기화)

	printf("학번 : %d\n", s1.num); //학번 출력
	s1.grade = 4.4; // 학점 멤버에 값 대입
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num); //학번 다시 출력

	return 0;
}