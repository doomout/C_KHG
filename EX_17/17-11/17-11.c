#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER}; //������ ����

int main(void)
{
	enum season ss; //������ ���� ����
	char* pc = NULL; //���ڿ��� ������ ������

	ss = SPRING; //���� ��� �� ����
	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swinmming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
		break;
	}
	printf("���� ���� Ȱ�� => %s\n", pc);

	return 0;
}