#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa); //�Լ� ����

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };   //�迭 ����

	print_ary(ary);

	return 0;
}

void  print_ary(int* pa) //�Ű������� ������ ����
{
	int  i;

	for ( i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]); // pa�� �迭 ��� ǥ���� ���
	}
}