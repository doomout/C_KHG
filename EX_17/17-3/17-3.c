#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile //구조체 선언
{
	int age; //나이
	double height;  //키
};

struct student //구조체 선언
{
	struct profile pf;
	int id; //학번을 저장할 멤버
	double grade; //학점을 저장할 멤버
}; //세미콜론 사용


int main(void)
{
	struct student s; //구조체 변수 선언

	s.pf.age = 19;
	s.pf.height = 172.3;
	s.id = 315;
	s.grade = 4.3;

	//각 멤버 데이터 출력
	printf("나이 : %d\n", s.pf.age);
	printf("키 : %.1lf\n", s.pf.height);
	printf("학번 : %d\n", s.id);
	printf("학점 : %.1lf\n", s.grade);

	return 0;
}