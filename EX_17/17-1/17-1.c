#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student //����ü ����
{
	int num; //int�� ���
	double grade; //double �� ���
}; //�����ݷ� ���

int main(void)
{
	struct student s1; //����ü ���� ����
	s1.num = 2; //num�� ����
	s1.grade = 2.7; //grade�� ����
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);

	return 0;
}