#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	int num;
	double grade;
};

typedef struct student Student;  //struct student 구조체 -> Student 형으로 재 정의
void print_data(Student* ps); //매개변수는 Student 형의 포인터

int main(void)
{
	Student s1 = { 315, 4.2 }; //Student 형의 변수 선언과 초기화

	print_data(&s1); //Student 형 변수의 주소 전달

	return 0;
}

void print_data(Student* ps)
{
	printf("학번 : %d\n", ps->num);  //Student 포인터로 멤버 접근
	printf("학점 : %.1lf\n", ps->grade);
}