#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[3] = {10, 20, 30};   //�迭 ����
	int* pa = ary; //�����Ϳ� �迭�� ����
	int i; //�ݺ� ���� ����

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)  //��� �迭 ��� ���
	{
		printf("%5d", *pa); //pa�� ����Ű�� �迭 ��� ���
		pa++; //���� �迭 ��Ҹ� ����Ű���� pa�� ����
	}

	return 0;
}