#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile //����ü ����
{
	int age; //����
	double height;  //Ű
};

struct student //����ü ����
{
	struct profile pf;
	int id; //�й��� ������ ���
	double grade; //������ ������ ���
}; //�����ݷ� ���


int main(void)
{
	struct student s; //����ü ���� ����

	s.pf.age = 19;
	s.pf.height = 172.3;
	s.id = 315;
	s.grade = 4.3;

	//�� ��� ������ ���
	printf("���� : %d\n", s.pf.age);
	printf("Ű : %.1lf\n", s.pf.height);
	printf("�й� : %d\n", s.id);
	printf("���� : %.1lf\n", s.grade);

	return 0;
}