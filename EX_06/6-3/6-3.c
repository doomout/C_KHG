#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1;

	do
	{
		a = a * 2; //a�� ���� 2��� �ø���.
	} while (a < 10); //a�� 10���� ������ 9�� �ݺ�

	printf("a : %d\n", a); //a ���

	return 0;
}