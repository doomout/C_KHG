#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b); //a, b�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb) //�Ű� ������ ������ ����
{
	int temp; //��ȯ�� ���� �ӽú���

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}