#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student //구조체 선언
{
	int id; //학번
	char name[20]; //이름
	double grade; //학점
}; 

int main(void)
{
	struct student  s1 = { 315, "장원영", 2.4 },
						s2 = { 316, "카리나", 3.7 },
						s3 = { 317, "윈터", 4.4 };

	struct student max;

	max = s1; //s1을 최고 학점으로 가정
	if (s2.grade > max.grade) max = s2; //s2가 더 높으면 max에 대입
	if (s3.grade > max.grade) max = s3; //s3가 더 높으면 max에 대입

	//각 멤버 데이터 출력
	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	return 0;
}