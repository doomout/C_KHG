#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count; //main.c �� �������� count ����
extern int total; //input.c �� ���� ���� total ����

double average(void)
{
	return total / (double)count; // �Է°��� ��� ��ȯ
}