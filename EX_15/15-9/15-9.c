#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.5;
	void* vp;  //void ������ - ������ �տ� *�� �ٿ� ���������� ǥ��

	vp = &a;
	printf("a : %d\n", *(int*)vp); //int ������ ����ȯ �� ���

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp); //double ������ ����ȯ �� ���

	return 0;
}